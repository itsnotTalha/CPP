#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N; cin>>N;
    unordered_map<long long, long long>a;
    while(N--){
        long long s; cin>>s;
        a[s]++;
    }
    cout<<a.size()<<endl;
    return 0;
}