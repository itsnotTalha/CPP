#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long int>a(n),ans(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int j=0;
        for(int i=0;i<n/2;i++){
            ans[j++]=a[i];
            ans[j++]=a[n-i-1];
        }
        if(n%2!=0){
            ans[n-1]=a[n/2];
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}