#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     int left = 0, right = n - 1; // Two pointers
    int s= 0, d = 0;
    bool serejaTurn = true; // Sereja moves first

    while (left <= right) {
        if (arr[left] > arr[right]) {
            if (serejaTurn) s += arr[left];
            else d += arr[left];
            left++;
        } else {
            if (serejaTurn) s += arr[right];
            else d += arr[right];
            right--;
        }
        serejaTurn = !serejaTurn; // Alternate turn
    }
    cout<<s<<" "<<d;
    return 0;
}