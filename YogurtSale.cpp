#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int total=0;
        if(n%2==0){
            total+=(2*a>b?b:2*a)*(n/2);
        }else{
            total+=n%2*(a);
            total+=(2*a>b?b:2*a)*(n/2);
        }
        cout<<total<<endl;
    }
    return 0;
}