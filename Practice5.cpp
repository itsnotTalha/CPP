#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int A[], int n){
    for(int i=0;i<n;i++){
        int flag = 0;
        for(int j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                flag=1;
                swap(A[j],A[j+1]);
            }
        }
        if(!flag) break;
    }
}
int main(){
    int A[5]={1,5,3,4,2};
    bubbleSort(A,5);\
    for(int x : A){
        cout<<x<<" ";
    }
    return 0;
}