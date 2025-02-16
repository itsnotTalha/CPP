#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n); 
        sort(b,b+n); 
        for(int i=0;i<k;i++){
            if(a[i]<b[n-i-1])
            a[i]=b[n-i-1];
        }
        int sum =0;
        for(int x:a){
            sum+=x;
        }
        cout<<sum<<endl;
    }
    return 0;
}