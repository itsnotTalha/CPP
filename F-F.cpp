#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N), C(N);

    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];
    for (int i = 0; i < N; i++) cin >> C[i];

    unordered_map<int, int> freq;

    for (int j = 0; j < N; j++) {
        freq[B[C[j] - 1]]++;  
    }

    long long count = 0;
    for (int i = 0; i < N; i++) {
        count += freq[A[i]];
    }

    cout << count << endl;
    return 0;
}
