#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        bool a1=true,a2=true;
        int n,b1=0,b2=0;
        string s;
        cin>>n>>s;
        for(int i=0;i<n;i++){
            if(a1){
                if(s[i]=='B'){
                    b1=i+1;
                    a1=false;
                }
            }
            if(a2){
                if(s[n-i-1]=='B'){
                    b2=n-i+1;
                    a2=false;
                }
            }
        }
        cout<<b2-b1<<endl;
    }
    return 0;
}