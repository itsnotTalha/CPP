#include <bits/stdc++.h>
using namespace std;

void solve() {
    char s[100005];  // Use character array for speed
    int q;
    scanf("%s", s);
    scanf("%d", &q);

    int n = strlen(s);
    vector<int> flip(n + 1, 0);  // Difference array for range updates

    vector<int> queryIndices;  // Store query indices for fast access
    queryIndices.reserve(q);

    for (int a = 0; a < q; a++) {
        char op;
        scanf(" %c", &op);  // Read operation type ('I' or 'Q')

        if (op == 'I') {
            int i, j;
            scanf("%d %d", &i, &j);
            i--; j--;  // Convert to 0-based index
            flip[i] ^= 1;
            if (j + 1 < n) flip[j + 1] ^= 1;
        } else {  // 'Q' query
            int i;
            scanf("%d", &i);
            i--;
            queryIndices.push_back(i);
        }
    }

    // Compute prefix XOR
    for (int i = 1; i < n; i++) {
        flip[i] ^= flip[i - 1];
    }

    // Output results efficiently
    static int case_num = 1;
    printf("Case %d:\n", case_num++);
    for (int i : queryIndices) {
        if (flip[i] % 2 == 1) {
            printf("%c\n", s[i] == '0' ? '1' : '0');
        } else {
            printf("%c\n", s[i]);
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        solve();
    }
    return 0;
}
