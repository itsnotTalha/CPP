#include <bits/stdc++.h>
using namespace std;

long long digitSum(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    long long n, s;
    cin >> n >> s;

    long long low = 1, high = n, ans = -1;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (mid - digitSum(mid) >= s) {
            ans = mid;
            high = mid - 1;  
        } else {
            low = mid + 1;
        }
    }

    if (ans == -1) {
        cout << 0 << endl;
    } else {
        cout << (n - ans + 1) << endl;
    }

    return 0;
}
