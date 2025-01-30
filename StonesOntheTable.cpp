#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, count=0,maxC=0;
    string s;
    cin >> n;
    cin >> s;
    for(int i=0; i<n-1; i++){
        if(s[i]==s[i+1]){
            count++;
           maxC = max(maxC,count);
        }else{
            count = 0;
        }
    }
    cout<<maxC;
    return 0;
}