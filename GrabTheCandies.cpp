#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,odc=0,evc=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                evc+=a[i];
            }else{
                odc+=a[i];
            }
        }
        if(evc>odc){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}