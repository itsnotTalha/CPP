#include <bits/stdc++.h>
using namespace std;

string solve(int a, int b, int c) {
   if(a==b+c||b==c+a||c==a+b){
    return "YES";
   }else{
    return "NO";
   }
}

int main() {
    int t;
    cin >> t;
    vector<string> arr(t); // Use vector instead of array

    for (int i = 0; i < t; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        arr[i] = solve(a, b, c);
    }

    for (const string& x : arr) {
        cout << x << endl;
    }

    return 0;
}
