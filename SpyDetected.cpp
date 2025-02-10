#include<bits/stdc++.h>
using namespace std;
int solve(){
     int n;
        cin>>n;
        int a[n];
        int c1,c2=0;
        for(int i=0; i<n;i++){
            cin>>a[i];
        }
        for(int i=1;i<n;i++){
            if(a[0]==a[i]){
                //i++;
            }else{
                c2++;
                c1=i;
                if(c2>1){
                    c1=0;
                }
            }
        }
    return c1+1;
}
int main(){
    int t;
    cin>>t;
    int ans[t];
    for(int j=0;j<t;j++){
   ans[j]=solve();
    }
    for(int x:ans){
        cout<<x<<endl;
    }
    return 0;
}