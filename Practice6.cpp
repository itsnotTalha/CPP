#include<bits/stdc++.h>
using namespace std;
//insertion sort
void sorty(int A[],int n){
    for(int i=1;i<n;i++){
        int t = A[i];
        int j = i-1;
        while(j>=0 && A[j]<t){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=t;
    }
}
int main(){
    int A[5]= {1,5,3,2,4};
    sorty(A,5);
    for(int x : A){
        cout<<x<<" ";
    }
    return 0;
}