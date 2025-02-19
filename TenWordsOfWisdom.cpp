#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        int winner = -1, maxQuality = -1;

        for (int i = 1; i <= n; i++) { // Indexing starts from 1
            int a, b;
            cin >> a >> b;

            if (a <= 10 && b > maxQuality) { // Select best quality within length limit
                maxQuality = b;
                winner = i;
            }
        }

        cout << winner << endl; // Output the winner's index
    }

    return 0;
}
