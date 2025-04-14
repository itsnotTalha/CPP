#include<bits/stdc++.h>
using namespace std;
int main(){
    long long N, K; cin>>N>>K;
    long long sum = 0;
    for(int i=0;i<K;i++){
        long long x; cin>>x;
        sum+=x;
    }
    cout<<((sum*2 >= N)?"YES":"NO")<<endl;
}