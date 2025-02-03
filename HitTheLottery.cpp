#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,count=0;
    cin>>n;
    int denominations[] = {100, 20, 10, 5, 1}; // List of denominations

    for (int d : denominations) {
        count += n / d;  // Use as many of this denomination as possible
        n %= d;          // Reduce `n` to the remaining amount
    }
    cout<<count;
}