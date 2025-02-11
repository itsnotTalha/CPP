#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        for(int j=1;j<=n;j++){
            if(j%3==0||j%10==3){
                n++;
            }
            if(j==n){
                a[i]=j;
            }
        }
    }
    for(int z : a){
        cout<<z<<endl;
    }
    return 0;
}