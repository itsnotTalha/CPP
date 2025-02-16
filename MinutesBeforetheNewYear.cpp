#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int h,m;
        cin>>h>>m;
        int total=0;
        total += (23-h)*60;
        total+=(60-m);
        cout<<total<<endl;
    }
    return 0;
}