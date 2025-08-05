#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin>>n>>k;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int q; cin>>q;
    while(q--){
        int l, r; cin>>l>>r;
        l--; r--;
        unordered_map<int,int>hashh;
        for(int i = l; i<=r; i++){
            hashh[a[i]]++;
        }
        int count = 0; 
        for(auto &x : hashh){
            if(x.second%k==0) count++;
        }
        cout<<count<<endl;
    }
}