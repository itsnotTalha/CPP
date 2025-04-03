#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        vector<int>store(n);
        int robin=0, pip = 0;
        for(int i =0 ;i<n;i++){
            int x; cin>>x;
            if(x>=k) robin+=x;
            else if(x==0 && robin!=0){
                pip++;
                robin--;
            }
        }
        cout<<pip<<endl;
    }
}