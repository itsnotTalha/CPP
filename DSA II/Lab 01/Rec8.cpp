#include<bits/stdc++.h>
using namespace std;
vector<int> a = {1,2,3,4,5,6,7};
void printArray(int n){
    if(n==0){
        cout<<a[n]<<" ";
        return;
    }
    printArray(n-1);
    cout<<a[n]<<" ";
}
void nthIndx(int n, int i){
    if(i==n){
        cout<<a[i]<<endl;
        return;
    }
    nthIndx(n,i-1);
}
int main(){
    nthIndx(2,a.size()-1);
    printArray(2);
}