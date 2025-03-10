#include<bits/stdc++.h>
using namespace std;
//selection sort
void selsort(int A[],int n){
    for(int i=0;i<n;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(A[j]>A[min]) min = j;
        }
        swap(A[i],A[min]);
    }
}
int main(){
    int A[]={1,5,6,2,4};
    selsort(A,5);
    for(int x : A){
        cout<<x<<" ";
    }
    return 0;
}