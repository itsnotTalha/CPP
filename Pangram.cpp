#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    set<char> uniqueLetters;

    for (char c : s) {
        uniqueLetters.insert(tolower(c)); 
    }

    cout << (uniqueLetters.size() == 26 ? "YES" : "NO");

    return 0;
}
