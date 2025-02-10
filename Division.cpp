#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s[t];
    for(int i=0;i<t;i++){
        int rating;
        cin>>rating;
        if(rating>=1900){
            s[i]="Division 1";
        }else if(rating<1900&&rating>=1600){
            s[i]="Division 2";
        }else if(rating<1600&&rating>=1400){
            s[i]="Division 3";
        }else{
            s[i]="Division 4";
        }
    }
    for(string f:s){
        cout<<f<<endl;
    }
    return 0;
}