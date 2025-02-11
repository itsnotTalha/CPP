#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s[t];
    for(int i=0; i<t;i++){
        char ch;
        cin>>ch;
        s[i]=(ch=='c'||ch=='o'||ch=='d'||ch=='e'||ch=='f'||ch=='r'||ch=='s' ? "YES":"NO");
    }
    for(string g:s){
        cout<<g<<endl;
    }
    return 0;
}