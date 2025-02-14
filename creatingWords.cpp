#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string a[t],b[t];
    for(int i=0;i<t;i++){
        cin>>a[i]>>b[i];
        char tmp;
        tmp=a[i][0];
        a[i][0]=b[i][0];
        b[i][0]=tmp;
    }
    for(int i=0; i<t; i++){
        cout<<a[i]<<" "<<b[i]<<endl;
    }
    return 0;
}