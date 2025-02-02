#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    int count =0;
    long long int arr[4];
    unordered_map<long long, int> vA;
    for(int i=0; i<n;i++){
        cin >> arr[i];
        vA[arr[i]]++;
    }
     for (auto &[key, value] : vA) {
    if(value>1){
        count += value-1;
        }
    }
    cout<<count;
    return 0;
}