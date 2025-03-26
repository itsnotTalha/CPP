#include <iostream>
#include <algorithm>

using namespace std;

bool canArrange(int n, int m, int k, int maxBenchLength) {
    // Calculate how many desks can be placed in total with the given max bench length
    long long totalDesks = 0;
    for (int i = 0; i < n; i++) {
        totalDesks += m / maxBenchLength;  // How many full benches of max length
        if (m % maxBenchLength > 0) {
            totalDesks += 1;  // There will be one more partial bench if the row isn't fully filled
        }
    }
    return totalDesks >= k;  // Check if we can seat at least k participants
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        
        // Binary search for the minimum longest bench length
        int left = 1, right = m;
        int result = m;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canArrange(n, m, k, mid)) {
                result = mid;  // Found a feasible solution, try smaller bench length
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        
        cout << result << endl;
    }
}

int main() {
    solve();
    return 0;
}
