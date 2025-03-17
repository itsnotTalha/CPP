#include<bits/stdc++.h>
using namespace std;
int main(){
    long long X,Y;
    cin>>X>>Y;
    long long ans = Y*10;
    if((X+ans>=100)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}