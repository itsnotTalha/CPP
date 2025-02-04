#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    int t;
    cin >> t;
    long long int arr[t];
    for(int i=0; i<t;i++){
    cin >> n;
    arr[i]=((n-1)/2>0 ? (n-1)/2 : 0);
    }
    for(int i=0; i<t;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}