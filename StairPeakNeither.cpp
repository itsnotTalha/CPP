#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s[t];
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b&&b<c){
            s[i]="STAIR";
        }else if(a<b&&b>c){
            s[i]="PEAK";
        }    else{
            s[i]="NONE";
        }
    }
    for(string x : s){
        cout<<x<<endl;
    }
    return 0;
}