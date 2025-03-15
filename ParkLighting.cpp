#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,light=0;
        cin>>n>>m;
        light+=(n*m)/2;
        light+=(n*m)%2;
        cout<<light<<endl;
    }
}