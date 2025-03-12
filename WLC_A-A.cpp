#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,a;
    cin>>n>>m>>a;
     
    long long w = (n + a - 1) / a;
    long long h = (m + a - 1) / a;
    
    cout <<w*h<<endl;
    return 0;
}