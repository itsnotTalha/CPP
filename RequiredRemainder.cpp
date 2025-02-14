#include<bits/stdc++.h>
using namespace std;
long long int solve() {
    long long int x, y, n;
    cin >> x >> y;
    cin >> n;

    // Find the maximum k such that k <= n and k % x == y
    long long int k = (n - y) / x * x + y;
    
    // If k is greater than n, subtract x to ensure it's within the limit
    if (k > n) {
        k -= x;
    }

    return k;
}
int main(){
    int t;
    cin>>t;
    long long int arr[t];
    for(int i=0; i<t; i++){
        arr[i]=solve();
    }
    for(int x:arr){
    cout<<x<<endl;
    }
    return 0;
}