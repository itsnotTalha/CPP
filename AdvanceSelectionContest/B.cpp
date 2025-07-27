#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9;
unsigned long long poww(long long n){
    if(n==1){
        return 1;
    }
    return ((n%MOD)*poww(n-1))%MOD;

}

long long fact( int n){
    long long tmp = 1;
    for(int i = 1; i<=n; i++){
        tmp = ((tmp%MOD) * (i%MOD))%MOD;
    }
    return tmp;
}
int main(){
    int n; cin>>n;
    //if(n<=20) cout<<n/5<<endl;
    long long num = poww(n);
    long long cnt = 0;
    while(num%10==0){
        cnt++;
        num/=10;
    }
    cout<<cnt<<endl;
}