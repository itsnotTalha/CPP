#include<bits/stdc++.h>
using namespace std;
vector<int>A = {1,2,4,5,60,3,5,6,8};
int largest(int n){
    if(n==0) return A[n];
    return max(A[n],largest(n-1));
}
int main(){
    cout<<largest(A.size()-1);
}