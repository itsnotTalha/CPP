#include <bits/stdc++.h>
using namespace std;

#define Fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

typedef long long ll;
#define for0(i, n) for (int i = 1; i <= int(n); i++)


int main() {
    Fast_io;
    int T; cin>>T;
    while(T--){
        int N; cin>>N;
        vector<ll>A(N+1);
        ll sum=0;
        for(int i = 1; i<=N;i++){
            cin>>A[i];
        }
        for(int i = 1; i<=N/2; i++){
            if(A[i]>=0) sum+=A[i];
            if(A[N-i+1]>=0) sum+=A[N-i+1];
        }
        cout<<sum<<endl;
    }
}
