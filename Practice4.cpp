#include<bits/stdc++.h>
using namespace std;
//Binary search
int binarySearch(int A[], int n, int target){
    int l = 0, h=n-1;
    while(l<=h){
        int mid = (l+h)/2;
        if(A[mid]==target) return mid;
        else if(A[mid]<target){
            l=mid+1;
        }else{
            h = mid - 1;
        }
    }
    return -1;
}
int main(){
    int A[5]={1,2,4,5,6};
    int target = 5;
    cout<<binarySearch(A,5,target)<<endl;
    return 0;
}