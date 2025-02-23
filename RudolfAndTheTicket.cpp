#include<bits/stdc++.h>
using namespace std;
#define sin(x) scanf("%d",&x)

int main(){
    int t;
    sin(t);
    while(t--){
        int n,m,k;
        sin(n);
        sin(m);
        sin(k);
        int a[n],b[m];
        for(int i=0;i<n;i++){
            sin(a[i]);
        }
        for(int i=0;i<m;i++){
            sin(b[i]);
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i]+b[j]<=k){
                    count++;
                }
            }
        }
        cout<<count<<"\n";
    }
}