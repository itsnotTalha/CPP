#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,a;
    cin>>n>>m>>a;
    long long int cnt=0;
    (n%a==0?cnt+=n/a:cnt+=(n/a)+1);
    (m%a==0?cnt+=m/a:cnt+=(m/a)+1);
    cout<<cnt;
    return 0;
}