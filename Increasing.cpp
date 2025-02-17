#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        bool chk=true;
        unordered_set<int>seen;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(seen.count(a[i])){
                chk=false;
                cout<<"NO"<<endl;
                break;
            }
            seen.insert(a[i]);
        }
        if(chk){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}