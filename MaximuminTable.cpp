#include<bits/stdc++.h>
using namespace std;
int solve(int r, int c){
    if(r==1 || c==1){
        return 1;
    }
    return solve(r-1, c) + solve(r, c-1);
}
int main(){
    int n; cin>>n;
    cout<<solve(n,n)<<endl;
}