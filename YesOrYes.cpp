#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<string>str(t);
    for(int i=0; i<t;i++){
        string s;
        cin>>s;
        if((s[0]=='y'||s[0]=='Y')&&(s[1]=='e'||s[1]=='E')&&(s[2]=='S'||s[2]=='s')){
            str[i]="YES";
        }else{
            str[i]="NO";
        }
    }
    for (const string& x : str) {
        cout << x << endl;
    }
    return 0;
}