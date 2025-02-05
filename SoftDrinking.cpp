#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, l, c, d, p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    set<int>arr;
    arr.insert((k*l)/nl);
    arr.insert((p)/np);
    arr.insert(c*d);
    int result = *arr.begin();
    cout<<result/n;
    return 0;
}