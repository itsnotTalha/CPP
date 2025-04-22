#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(101);
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> A[i];
        B[A[i]]++;
    }
    vector<int> d;
    int max = B[0];
    int count = 0;
    for (int i = 0; i < 101; i++)
    {
        if (B[i] > max)
            max = B[i];
    }
    for (int i = 0; i < 101; i++)
    {
        if (B[i] == max)
            d.push_back(i);
    }
    cout << d.back();
}
