#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n]={},min;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        min = 0;
       for(int i=0;i<n;i++){
        if(a[i]<a[min]){
            min=i;
        }
       }
        a[min]++;
        int prod=1;
        for(int x:a){
            prod*=x;
        }
        cout<<prod<<endl;
    }
    return 0;
}