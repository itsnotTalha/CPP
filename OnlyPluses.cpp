#include<bits/stdc++.h>
using namespace std;
#define sin(x) scanf("%d",&x)
int main(){
    int t;
    sin(t);
    while(t--){
        set<int>ans;
       vector<int>a(3);
        sin(a[0]);
        sin(a[1]);
        sin(a[2]);
        for(int i=0;i<5;i++){
          sort(a.begin(),a.end());
          a[0]++;
        }
        cout<<a[0]*a[1]*a[2]<<"\n";
    }
}