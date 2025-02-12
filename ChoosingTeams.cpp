#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]+=k;
    }
    int temp=0, count=0;
    for(int i=0;i<n;i++){
        if(a[i]<=5){
            temp++;
        }
        if(temp==3){
            count++;
            temp=0;
        }
    }
    cout<<count;
    return 0;
}