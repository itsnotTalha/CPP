#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0,floor,tiles=0;
    for(int i=1;;i++){
        if(sum<=n){
        tiles+=i;
        sum+=tiles;
        floor=i-1;
        }else{
            break;
        }
    }
    cout<<floor<<endl;
}