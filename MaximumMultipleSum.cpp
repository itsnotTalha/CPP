#include<bits/stdc++.h>
using namespace std;

int find_best_x(int n) {
    int best_x = 2;
    int max_sum = 0;

    for (int x = 2; x <= n; x++) {
        int k = n / x;
        int total_sum = x * (k * (k + 1) / 2);

        if (total_sum > max_sum) {
            max_sum = total_sum;
            best_x = x;
        }
    }
    return best_x;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << find_best_x(n) << endl;
    }

    return 0;
}
