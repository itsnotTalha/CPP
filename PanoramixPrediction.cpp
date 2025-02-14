#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int nextPrime(int n) {
    int candidate = n + 1;
    while (true) {
        if (isPrime(candidate)) {
            return candidate;
        }
        candidate++;
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    if(nextPrime(n)==m){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}