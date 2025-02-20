#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s[3];
        cin>>s[0]>>s[1]>>s[2];
        int tmp;
        for(int i=0;i<3;i++){
            if(s[0][i]=='?'||s[1][i]=='?'||s[2][i]=='?'){
                tmp=i;
            }
        }        
        string ans ="ABC";
       for(int i=0;i<3;i++){
        if(s[i][tmp]!='?'){
            ans.erase(remove(ans.begin(), ans.end(), s[i][tmp]), ans.end());
        }
       }
       cout<<ans<<endl;
    }
    return 0;
}