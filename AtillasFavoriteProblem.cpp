#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            a[i]=s[i]-'a';
        }
        sort(a.begin(),a.end());
        cout<<a[n-1]+1<<endl;
    }
    return 0;
}