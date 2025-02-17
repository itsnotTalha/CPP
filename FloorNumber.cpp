#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a=2,n,x;
        int i=2;
        cin>>n>>x;
        if(n<=2){
            cout<<1<<endl;
        }else{
            while(a<=n){
                if(a<=n&&n<=a+x){
                    cout<<i<<endl;
                    break;
                }else{
                    a+=x;
                    i++;
                }
            }
        }
    }
    return 0;
}