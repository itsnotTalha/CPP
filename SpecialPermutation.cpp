#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>p(n);
        for(int i=0;i<n;i++){
            p[i]=i+1;
        }
        for(int i=0;i<n-1;i+=2){
            swap(p[i],p[i+1]);
        }
        if(n%2==1){
            swap(p[n-1],p[n-2]);
        }
        for(int x : p){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}