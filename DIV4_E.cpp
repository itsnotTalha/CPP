#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long>a(n);
        for(int i =0; i<n;i++){
            cin>>a[i];
        }
        long long sum = 0;
        for (int k = 0; k < n; k++) {
            long long cSum = 0;
            for (int i = 0; i < n; i++) {
                cSum += (a[k] ^ a[i]);
            }
            sum = max(sum, cSum);
        }
        cout<<sum<<endl;
    }
}