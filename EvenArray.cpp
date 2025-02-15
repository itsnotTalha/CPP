#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    int even_misplaced = 0, odd_misplaced = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i % 2 == 0 && a[i] % 2 == 1) {
            even_misplaced++;
        }
        if (i % 2 == 1 && a[i] % 2 == 0) {
            odd_misplaced++;
        }
    }

    if (even_misplaced == odd_misplaced) {
        return even_misplaced;  // Minimum swaps needed
    } else {
        return -1;  // Impossible case
    }
}

int main() {
    int t;
    cin >> t;
    vector<int>res(t);
    for(int i=0;i<t;i++){
        res[i]=solve();
    }
    for(int z:res){
        cout<<z<<endl;
    }
    return 0;
}
