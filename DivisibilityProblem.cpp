#include<bits/stdc++.h>
using namespace std;
int isDivisible(long long int a , long long int b){
    return (a % b == 0) ? 0 : (b - (a % b));
}
int main(){
    int t;
    cin >> t;
    int arr[t];
    for(int i=0; i<t; i++){
        long long int a ,b;
        cin >> a >> b;
        arr[i]=isDivisible(a,b);
    }
    for(int x : arr){
        cout << x << endl;
    }
    return 0;
}