#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q; cin>>n>>q;
    vector<long long>a(n);
    for(int i = 0;i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    while(q--){
        long long k; cin>>k;
        auto it = lower_bound(a.begin(), a.end(), k);
        int sarch = it - a.begin();
        cout<<sarch<<endl;
    }
}