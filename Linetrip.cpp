#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int min=a[0];
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]>min){
                min=a[i]-a[i-1];
            }
            if(i==n-1)
            if((x-a[i])*2>min)
            min=(x-a[i])*2;
        }
        cout<<min<<endl;
    }
}