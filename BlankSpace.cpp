#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int blank=0,max=0;
        for(int x:a){
            if(x==0){
                blank++;
                if(blank>max){
                    max=blank;
                }
            }else{
                blank=0;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}