#include<bits/stdc++.h>
using namespace std;
#define sin(x) scanf("%d",&x)
int main(){
    int n;
    sin(n);
    int count=0;
    for(int i=2;i<=n;i++){
        if(n%i==0)
        count++;
    }
    cout<<count<<endl;
}