#include<bits/stdc++.h>
using namespace std;
#define for0(i,x) for(int i=0;i<x;i++)
#define for1(i,x) for(int i=1;i<=x;i++)
typedef long long ll;


bool isPrime(int num, const vector<int>& primes) {
    for (int prime : primes) {
        if (num % prime == 0) {
            return false;
        }
    }
    return true;
}
int searchP(int n) {
    if(n==1)return 2;
    vector<int>pms={2};
    int num = 3;
    while (pms.size() < n) {
        if (isPrime(num, pms)) {
            pms.push_back(num);
        }
        num+=2;
    }

    return pms[n-1];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    

    int k;
    cin>>k;
    while(k--){
        int n;
        cin>>n;
        cout<<searchP(n)<<endl;
    }
}