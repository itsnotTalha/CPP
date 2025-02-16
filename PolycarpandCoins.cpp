#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a = round(n/3.0);
        cout<<n-2*a<<" "<<a<<endl;
    }
    return 0;
}