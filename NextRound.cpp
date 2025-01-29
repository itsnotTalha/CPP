#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , k;
    cin >> n >> k;
    int arr[n];
    int count=0;
    int temp;
    for (int i=0; i<n; i++){
       cin >> arr[i];
        if(i==k-1){
            temp = arr[i];
        }
    }
    for(int x : arr){
        if(x>=temp && x>0){
            count++;
        }
    }
    cout<<count;
    return 0;
}