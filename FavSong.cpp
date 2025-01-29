#include<bits/stdc++.h>
using namespace std;
int main(){
    long int N;
    cin>>N;
    long long int a[N];
    unordered_map<long long, int> vA;
    int max=0;
    int ans=0;
    for(int i=0; i<N;i++){
        cin >> a[i];
        vA[a[i]]++;
        if(vA[a[i]]>=max){
            max=vA[a[i]];
        }
    }
    for (auto &[key, value] : vA) {
    if(value==max){
        ans++;
    }
}
    cout<<ans;

    return 0;
}