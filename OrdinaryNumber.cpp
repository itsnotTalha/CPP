#include <bits/stdc++.h>
using namespace std;

vector<long long> ordinary;

// Function to precompute all ordinary numbers up to 10^9
void precomputeOrdinaryNumbers() {
    for (int d = 1; d <= 9; d++) { // Digits from 1 to 9
        long long num = d;
        while (num <= 1000000000) { // Generate numbers like 1, 11, 111, ...
            ordinary.push_back(num);
            num = num * 10 + d; // Append the same digit
        }
    }
}

// Function to count ordinary numbers ≤ n using binary search
int countOrdinary(long long n) {
    return upper_bound(ordinary.begin(), ordinary.end(), n) - ordinary.begin();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    precomputeOrdinaryNumbers(); // Generate all ordinary numbers
    sort(ordinary.begin(), ordinary.end()); // Ensure they are sorted for binary search

    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;
        cout << countOrdinary(n) << '\n'; // Corrected count function
    }

    return 0;
}
