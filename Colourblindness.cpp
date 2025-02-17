#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s1,s2;
        cin>>n>>s1>>s2;
        bool chk = false;
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i]||s1[i]=='G'&&s2[i]=='B'||s2[i]=='G'&&s1[i]=='B'){
                chk=true;
            }else{
                chk=false;
                break;
            }
        }
        cout<<(chk?"YES":"NO")<<endl;
    }
    return 0;
}