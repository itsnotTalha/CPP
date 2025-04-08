#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int sumDigit(int n) {
    int sum = 0;
    while (n != 0) {
        int t = n % 10;
        sum += (t * t);
        n /= 10;
    }
    return sum;
}

void Merge(vector<int>& A, int l, int m, int h) {
    int size = h - l + 1;
    vector<int> B(size);
    int i = l, j = m + 1, k = 0;

    while (i <= m && j <= h) {
        int x = sumDigit(A[i]), y = sumDigit(A[j]);
        if (x > y) {
            B[k] = A[j];
            k++;
            j++;
        } else {
            B[k] = A[i];
            k++;
            i++;
        }
    }

    while (i <= m) {
        B[k] = A[i];
        k++;
        i++;
    }

    while (j <= h) {
        B[k] = A[j];
        k++;
        j++;
    }

    for (int q = 0; q < size; q++) {
        A[l + q] = B[q];
    }
}

void Msort(vector<int>& A, int l, int h) {
    if (l < h) {
        int m = (l + h) / 2;
        Msort(A, l, m);
        Msort(A, m + 1, h);
        Merge(A, l, m, h);
    }
}

int main() {
    int size;
    cin >> size;
    vector<int> A(size);
    for (int i = 0; i < size; i++) {
        cin >> A[i];
    }

    Msort(A, 0, size - 1);

    for (int x : A) {
        cout << x << " ";
    }

    return 0;
}
