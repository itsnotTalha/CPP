#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    char current = 'a'; // The wheel starts at 'a'
    int rotations = 0;

    for (char target : s) {
        int diff = abs(target - current);
        rotations += min(diff, 26 - diff); // Minimize between clockwise and counterclockwise
        current = target; // Update current position
    }

    cout << rotations << endl;
    return 0;
}
