#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        priority_queue<int, vector<int>, greater<int>> minHeap; 

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            minHeap.push(x);
        }

        while (k-- && !minHeap.empty()) {
            int smallest = minHeap.top();
            minHeap.pop();
            minHeap.push(-smallest);  
        }

        long long sum = 0;
        while (!minHeap.empty()) {
            sum += minHeap.top();
            minHeap.pop();
        }

        cout << sum << endl;
    }
    return 0;
}
