#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    if ((n / 2) % 2 == 1) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    vector<int> arr(n);
    int evn = 2, odd = 1;

    // Fill the first half with even numbers
    for (int i = 0; i < n / 2; i++) {
        arr[i] = evn;
        evn += 2;
    }

    // Fill the second half with odd numbers
    for (int i = n / 2; i < n - 1; i++) {
        arr[i] = odd;
        odd += 2;
    }

    // Adjust last element to balance sums
    arr[n - 1] = ((n/2)*((n/2)+1))
    -((n/2-1)*(n/2-1));

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    for(int i=0;i<t;i++){
        solve(a[i]);
    }
    return 0;
}
