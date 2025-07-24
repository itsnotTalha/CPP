#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1, 2, 3, 3};
    unordered_map<int,int> s;
    for(int x : nums){
        if(s[x]>0) return true;
        else s[x]++;
    }
    return false;
    return 0;
}