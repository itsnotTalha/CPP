#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                char ch;
                cin>>ch;
                if(ch>='a'&&ch<='z'){
                    a+=ch;
                }
            }
        }
        cout<<a<<endl;
    }
    return 0;
}