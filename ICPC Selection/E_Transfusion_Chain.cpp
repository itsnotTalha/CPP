#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        unordered_map<string,int>ans;
        ans["O"] = 0;
        ans["AB"] = 0;
        int n; cin>>n;
        for(int i = 0; i<n; i++){
            string s; cin>>s;
            ans[s]++;
        }
        int sz = 0;
        if(ans["O"]){
            sz+=ans["O"];
            sz+=max(ans["A"], ans["B"]);
            sz+=ans["AB"];
        }else{
            sz+=max(ans["A"], ans["B"]);
            sz+=ans["AB"];
        }
        cout<<sz<<endl;

    }
    return 0;
}