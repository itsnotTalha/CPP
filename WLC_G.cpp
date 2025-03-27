#include<bits/stdc++.h>
using namespace std;
#define for0(i,x) for(int i=0;i<x;i++)
#define for1(i,x) for(int i=1; i<=x;i++)
typedef long long ll;

ll counting(int n){
    if(n<0) return 0;
    if(n==0) return 1;
    ll count =0;
    for1(i,6){
        count+=counting(n-1);
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<counting(n)<<endl;
}