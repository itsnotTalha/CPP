#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int sum =0;
    for(int b:a){
        sum+=abs(b-a[n/2]);
    }
    cout<<sum;
    return 0;
}