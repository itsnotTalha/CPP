#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        int count=0;
        cin>>n>>s;
        for(int i=0;i<n/2;i++){
            if(s[i]=='0'&&s[n-i-1]=='1'||s[i]=='1'&&s[n-i-1]=='0'){
                count++;   
            }else{
                break;
            }
        }
        cout<<n-(count*2)<<endl;
    }
    return 0;
}