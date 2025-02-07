#include<bits/stdc++.h>
using namespace std;
int solve(int a, int b, int c, int d){
    int count=0;
    if(a<b){
        count++;
    }
    if(a<c){
        count++;
    }
    if(a<d){
        count++;
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    int result[t]={};
    for(int i=0;i<t;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        result[i]=solve(a,b,c,d);
    }
    for(int x:result){
        cout<<x<<endl;
    }
    return 0;
}