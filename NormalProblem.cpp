#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int l = a.size();
        string b="";
        for(int i=0;i<l;i++){
            if(a[l-i-1]=='p'){
                b.push_back('q');
            }else if(a[l-i-1]=='q'){
                b.push_back('p');
            }else{
                b.push_back(a[l-i-1]);
            }
        }
        cout<<b<<endl;
    }
}