#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x = n%4;
        cout<<n/4+x/2<<endl;
    }
    return 0;
}