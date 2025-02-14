#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int ar[t];
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        ar[i]=b-a;
    }
    for(int z : ar){
        cout<<z<<endl;
    }
    return 0;
}