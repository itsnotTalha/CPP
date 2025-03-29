#include<bits/stdc++.h>
using namespace std;
#define for0(i,x) for(int i=0;i<x;i++)
#define for1(i,x) for(int i=1;i<=x;i++)
typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> k(m);
    for0(i,m) {
        cin >> k[i];
    }

    vector<bool> dp(n + 1, false);
    dp[0] = false;

    for1(i,n) {
        for0(j,m){
            if (i - k[j] >= 0 && !dp[i - k[j]]) {
                dp[i] = true;
                break;
            }
        }
    }
    
    

    cout << (dp[n] ? 2 : 1) << endl;
    
    return 0;
}
