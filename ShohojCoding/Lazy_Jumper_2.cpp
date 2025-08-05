#include<bits/stdc++.h>
using namespace std;
int main(){
    int N; cin>>N;
    vector<int>a(N+1);
    for(int i=1; i<=N; i++) cin>>a[i];
    int tmp = 1, i = 1;
    for(i = 1; i<=N; i+=a[i]){
       if(i+a[i]>N) break;
    }
    cout<<i<<endl;
}