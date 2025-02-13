#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mishk=0,chris=0;
    while(n--){
        int a,b;
        cin>>a>>b;
        (a>b ? mishk++ : chris++);
    }
    if(mishk>chris){
        cout<<"Mishka";
    }else if(chris>mishk){
        cout<<"Chris";
    }else{
        cout<<"Friendship is magic!^^";
    }
    return 0;
}