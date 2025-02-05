#include<bits/stdc++.h>
using namespace std;
int main(){
int HOUR = 240;
    int n,k,sum=0,hour=0;
    cin>>n>>k;
    HOUR-=k;
    for(int i=1;i<=n;i++){
        sum+=i*5;
        if(sum<=HOUR){
            hour++;
        }else{
            break;
        }
    }
    cout<<hour;
    return 0;
}