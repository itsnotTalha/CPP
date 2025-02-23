#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {1, 3, 5, 7, 9}, b[] = {2, 4, 6, 8};
    vector<int> ans;
    int i = 0, j = 0;

    // Merge two sorted arrays
    while (i < 5 && j < 4) {
        if (a[i] < b[j]) {
            ans.push_back(a[i++]);
        } else {
            ans.push_back(b[j++]);
        }
    }

    // Add remaining elements of a[]
    while (i < 5) {
        ans.push_back(a[i++]);
    }

    // Add remaining elements of b[]
    while (j < 4) {
        ans.push_back(b[j++]);
    }

    // Print merged array
    for (int num : ans) {
        cout << num << " ";
    }

    return 0;
}
