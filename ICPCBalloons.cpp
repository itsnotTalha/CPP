#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int total=0;
        unordered_set<char>seen;
        for(int i=0;i<n;i++){
            if(seen.count(s[i])){
                total+=1;
            }else{
                total+=2;
            }
            seen.insert(s[i]);
        }
        cout<<total<<endl;
    }
    return 0;
}