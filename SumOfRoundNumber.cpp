#include<bits/stdc++.h>
using namespace std;
void solve(int n) {
    vector<int> roundNumbers;
    
    int placeValue = 1; // To track 1s, 10s, 100s, etc.
    
    while (n > 0) {
        int digit = n % 10;
        if (digit != 0) {
            roundNumbers.push_back(digit * placeValue);
        }
        n /= 10;
        placeValue *= 10;
    }
    
    // Output the result
    cout << roundNumbers.size() << endl;
    for (int num : roundNumbers) {
        cout << num << " ";
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    int arr[t];
    for(int i=0; i < t;i++){
        cin>>arr[i];
    }
    for(int x:arr){
        solve(x);
    }
    return 0;
}