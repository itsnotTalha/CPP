#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int side = max(max(a, b), 2 * min(a, b));
        cout << side * side << endl;
    }
    return 0;
}
