#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0],count=0;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
     for(int i=0;i<n;i++){
        count+=max-arr[i];
    }
    cout<<count;
    return 0;
}