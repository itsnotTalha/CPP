#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
long long poww(long long n){
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
   string s; cin>>s;
   unordered_map<char,int>hash;
   for(char x : s) hash[x]++;
   long long ans = poww(s.size());
   long long faltu = 1;
   
   for(auto &a : hash){
    if(a.second>1){
        faltu = ((faltu%MOD) * poww(a.second))%MOD;
    }
   }
   cout<<(ans/faltu)%MOD<<endl;
}