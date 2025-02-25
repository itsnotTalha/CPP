#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int oc=0,ec=0;
    int c1=0,c2=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            c1++;
            ec = i+1; 
        }else{
            c2++;
            oc = i+1; 
        }
    }
    if(c1==1){
        cout<<ec;
    }else{
        cout<<oc;
    }
    return 0;
}