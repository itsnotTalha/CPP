#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n+10);
    int max,min;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int cnt=0;
    max=a[1], min=a[1];
    for(int i=2;i<=n;i++){
        if(a[i]>max) {
            cnt++;
            max=a[i];
        }
        else if (a[i]<min) {
            cnt++;
            min= a[i];
        }
    }
    cout<<cnt;
}