#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        long long int a,b,n,sum=0,count=0;
        cin>>a>>b>>n;
        while(a <= n && b <= n){
            (a<b?a+=b:b+=a);
            count++;
        }
        cout<<count<<endl;
    }
}