#include<bits/stdc++.h>
using namespace std;
int mx, mn;
void findmxmin(vector<int> &a, int n){
    if(n==0){
        mx = a[0];
        mn = a[0];
        return;
    }
    findmxmin(a,n-1);
    mx = max(mx, a[n]);
    mn = min(mn, a[n]); 
}
int main(){
    vector<int>A = {1,3,5,7,4,3,6,7};
    findmxmin(A, A.size()-1);
    cout<<mx<<" "<<mn;
}