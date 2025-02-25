#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c;
        cin>>a>>b>>c;
        if(abs((a+b)-c)%2==0){
            cout<<"Second"<<endl;
        }else{
            cout<<"First"<<endl;
        }
    }
    return 0;
}