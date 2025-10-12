/*
    The first line contains an integer 
    5 Bundles
    Need to find minimum cost for each bundles from each restaurant.

*/

#include <bits/stdc++.h>
using namespace std;

#define Fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;

void solve() {
    int N; cin >> N;

    // Reading 5 bundles, each with 4 items
    vector<vector<int>> bundle(5, vector<int>(4));
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> bundle[i][j];
        }
    }

    // Reading restaurant data
    vector<int> time(N);
    vector<vector<int>> price(N, vector<int>(21)); // 1-based index for items

    for (int i = 0; i < N; i++) {
        cin >> time[i];
        for (int j = 1; j <= 20; j++) {
            cin >> price[i][j];
        }
    }

    // Find minimum cost for each of 5 bundles
    vector<ll> minCost(5, LLONG_MAX);
    vector<int> usedTime(5, 0);

    for (int i = 0; i < 5; i++) {  // for each bundle
        for (int r = 0; r < N; r++) { // for each restaurant
            ll total = 0;
            for (auto item : bundle[i]) {
                total += price[r][item];
            }
            if (total < minCost[i]) {
                minCost[i] = total;
                usedTime[i] = time[r];
            }
        }
    }

    // Compute total minimum cost and maximum time
    ll totalCost = accumulate(minCost.begin(), minCost.end(), 0LL);
    int maxTime = *max_element(usedTime.begin(), usedTime.end());

    cout << totalCost + maxTime << "\n";
}

int main() {
    Fast_io;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}

/*
1
3
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
17 18 19 20
20
5  5  5  5 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
15
20 20 20 20 10 10 10 10 20 20 20 20 20 20 20 20 20 20 20 20
25
20 20 20 20  50  50  50  50  5  5  5  5  5  5  5  5  5  5  5  5
*/