#include<bits/stdc++.h>
using namespace std;
void Merge(int A[],int l,int h,int mid){
    int size = h-l+1;
    int B[size];
    int i=l,j=mid+1,k=0;
    while(i<=+mid&&j<=h){
        if(A[i]>A[j]){
            B[k++]=A[i++];
        }else{
            B[k++]=A[j++];
        }
    }
    while(i<=mid){
        B[k++]=A[i++];
    }
    while(j<=h){
        B[k++]=A[j++];
    }
    for(int g = 0; g<size; g++){
        A[l+g]=B[g];
    }
}
void MergeSort(int A[], int l, int h){
    if(l<h){
        int mid = (l+h)/2;
        MergeSort(A,l,mid);
        MergeSort(A,mid+1,h);
        Merge(A,l,h,mid);
    }
}
int main(){
    int A[5]={1,2,1,4,3};
    MergeSort(A,0,5);
    for(int x : A){
        cout<<x<<" , ";
    }
    return 0;
}