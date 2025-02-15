#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t]={};
    for(int k=0;k<t;k++){
        int x;
        cin>>x;
        a[k]+=(x%10-1)*10;
        for(int i=1; x!=0;i++){
            a[k]+=i;
            x/=10;
        }
    }
    for(int x:a){
        cout<<x<<endl;
    }
    return 0;
}