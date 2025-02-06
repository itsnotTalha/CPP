#include<bits/stdc++.h>
using namespace std;
int main() {
    int nums[4];
    
    // Read four integers
    for (int i = 0; i < 4; i++) {
        cin >> nums[i];
    }
    
    // Sort the array to easily find a+b, a+c, b+c, and a+b+c
    sort(nums, nums + 4);
    
    // Extract a, b, and c using the sorted values
    int a = nums[3] - nums[2]; // a = (a+b+c) - (b+c)
    int b = nums[3] - nums[1]; // b = (a+b+c) - (a+c)
    int c = nums[3] - nums[0]; // c = (a+b+c) - (a+b)
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}