#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> heights(n);

    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    int max_height = heights[0], max_index = 0;
    int min_height = heights[0], min_index = 0;

    for (int i = 1; i < n; i++) {
        if (heights[i] > max_height) {
            max_height = heights[i];
            max_index = i;
        }
        if (heights[i] <= min_height) { 
            min_height = heights[i];
            min_index = i;
        }
    }

    int moves = max_index;

    // Steps to bring the shortest to the back
    // If shortest comes after tallest, it moves one position less
    if (min_index > max_index) {
        moves += (n - 1 - min_index);
    } else {
        moves += (n - 1 - min_index - 1);
    }

    cout << moves;
    return 0;
}
