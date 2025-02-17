#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        unordered_set<int>seen;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            seen.insert(x);
        }
        if(seen.count(k)>0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}