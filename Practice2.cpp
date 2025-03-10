#include <bits/stdc++.h>
using namespace std;

struct Practice {
    string name;
    int price;
    int amount;
};

void Merge(Practice A[], int l, int h, int mid) {
    int i = l, j = mid + 1, k = 0;
    int size = h - l + 1;
    vector<Practice> B(size); 

    while (i <= mid && j <= h) {
        if (A[i].amount < A[j].amount) {
            B[k++] = A[j++];
        } else {
            B[k++] = A[i++];
        }
    }

    while (i <= mid) {
        B[k++] = A[i++];
    }

    while (j <= h) {
        B[k++] = A[j++];
    }

    for (int p = 0; p < size; p++) {
        A[l + p] = B[p];
    }
}

void binarySort(Practice A[], int l, int h) {
    if (l < h) {
        int mid = (l + h) / 2;
        binarySort(A, l, mid);
        binarySort(A, mid + 1, h);
        Merge(A, l, h, mid);
    }
}

int main() {
    Practice p[5] = {
        {"Item1", 1000, 100},
        {"Item2", 2000, 1900},
        {"Item3", 3000, 1100},
        {"Item4", 4000, 880},
        {"Item5", 5000, 660}
    };

    binarySort(p, 0, 4); 

    for (Practice x : p) {
        cout << x.name << " " << x.amount << endl;
    }

    return 0;
}
