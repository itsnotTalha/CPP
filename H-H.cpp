#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n>=3){
            cout<<(n-1)/2<<endl;
        }else{
            cout<<0<<endl;
        }
    }
    return 0;
}