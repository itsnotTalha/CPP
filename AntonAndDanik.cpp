#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, aCount=0,bCount=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            aCount++;
        }else{
            bCount++;
        }
    }
    if(aCount>bCount){
        cout<<"Anton";
    }else if(aCount<bCount){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }
    return 0;
}