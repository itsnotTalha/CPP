#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
long long poww(long long n){
    if(n==1){
        return 2*1;
    }
    return 2*poww(n-1)%MOD;

}
int main(){
    int n; cin>>n;
    cout<<poww(n)<<endl;
}