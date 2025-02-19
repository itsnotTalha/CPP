#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<long long int> a(n), b(n);
        
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        long long int AminValue = *min_element(a.begin(), a.end());
        long long int BminValue = *min_element(b.begin(), b.end());

        long long count = 0;  // Use `long long` to prevent overflow

        for (int i = 0; i < n; i++) {
            int diffA = a[i] - AminValue;
            int diffB = b[i] - BminValue;
            count += max(diffA, diffB); // Take max moves required
        }

        cout << count << endl;
    }

    return 0;
}
