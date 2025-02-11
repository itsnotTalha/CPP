#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t]={};
    for(int i=0; i<t;i++){
        int x;
        cin>>x;
        a[i]+=x%10; 
        a[i]+=x/10; 
    }
    for(int x : a){
        cout<<x<<endl;
    }
}