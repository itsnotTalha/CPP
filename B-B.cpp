#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> priority;

bool customCompare(const string &s1, const string &s2) {
    int len = min(s1.size(), s2.size());
    for (int i = 0; i < len; i++) {
        if (priority[s1[i]] != priority[s2[i]]) {
            return priority[s1[i]] < priority[s2[i]];
        }
    }
    return s1.size() < s2.size(); 
}

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < 26; i++) {
        priority[s[i]] = i;
    }

    int n;
    cin >> n;
    vector<string> words(n);

    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    int K;
    cin >> K;

    sort(words.begin(), words.end(), customCompare);

    cout << words[K - 1] << endl;

    return 0;
}
