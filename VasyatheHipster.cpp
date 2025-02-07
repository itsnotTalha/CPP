#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,numOfDays,rem;
    cin>>a>>b;
    if(a<b){
        numOfDays=a;
        rem=b-a;
    }else{
        numOfDays=b;
        rem=a-b;
    }
    cout<<numOfDays<<" "<<rem/2;
    return 0;
}