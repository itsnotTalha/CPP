#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> prog, math, pe;

    // Read input and store indices
    for (int i = 1; i <= n; i++) {
        int skill;
        cin >> skill;
        if (skill == 1) prog.push_back(i);
        else if (skill == 2) math.push_back(i);
        else pe.push_back(i);
    }

    // Calculate the maximum number of teams
    int teams = min({(int)prog.size(), (int)math.size(), (int)pe.size()});
    cout << teams << endl;

    // Form teams
    for (int i = 0; i < teams; i++) {
        cout << prog[i] << " " << math[i] << " " << pe[i] << endl;
    }
    
    return 0;
}
