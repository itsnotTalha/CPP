#include <bits/stdc++.h>
using namespace std;

string solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int &x : a) {
        cin >> x;
    }

    sort(a.begin(), a.end());  // Sorting to check adjacency condition

    bool possible = true;
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i - 1] > 1) {  // If difference is more than 1, not possible
            possible = false;
            break;
        }
    }

    return (possible ? "YES" : "NO");
}

int main() {
    int t;
    cin >> t;
    string s[t];
    for(int i=0; i<t;i++){
        s[i]=solve();
    }
    for(string x : s){
        cout<<x<<endl;
    }
    return 0;
}
