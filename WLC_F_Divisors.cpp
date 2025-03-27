#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll countDiv(ll n) {
    ll divisors=1;
    ll count=0;
    while(n%2==0) {
        n/=2;
        count++;
    }
    divisors*=(count+1);
    
    for(ll i=3;i*i<=n;i+=2) {
        count=0;
        while(n%i==0) {
            n/=i;
            count++;
        }
        divisors*=(count+1);
    }
    
    if(n>2) divisors*=2;
    
    return divisors;
}

pair<ll,ll> findMaxDiv(ll L,ll U) {
    ll mnum=L;
    ll mDiv=countDiv(L);

    for(ll n=L+1;n<=U;n++) {
        ll divisors=countDiv(n);
        if(divisors>mDiv||(divisors==mDiv&&n<mnum)) {
            mDiv=divisors;
            mnum=n;
        }
    }

    return {mnum,mDiv};
}

int main() {
    ll N;
    cin>>N;
    while(N--) {
        ll L,U;
        cin>>L>>U;
        
        auto res=findMaxDiv(L,U);
        cout<<"Between "<<L<<" and "<<U<<", "<<res.first<<" has a maximum of "<<res.second<<" divisors."<<endl;
    }

    return 0;
}
