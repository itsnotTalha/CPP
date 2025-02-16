#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        cout<<(sum%2==0?"YES":"NO")<<endl;
    }
    return 0;
}