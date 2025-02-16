#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int max,min;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        max=a[0];
        min=a[0];
        for(int i=0;i<n;i++){
            if(a[i]>max){
                max=a[i];
            }
            if(a[i]<min){
                min=a[i];
            }
        }
        cout<<(max-min)<<endl;
    }
}