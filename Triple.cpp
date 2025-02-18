#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int>a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[x]++;
        }
        int max=-1;
        for (auto &[key, value] : a) {
            if(value>=3){
                max=key;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}