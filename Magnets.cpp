#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, count=1;
    string tmp;
    cin>>n;
    while(n--){
        string s;
        cin >> s;
        if(!tmp.empty()){
            if(s!=tmp){
                count++;
            }
        }
        tmp=s;
    }
    cout<<count;
    return 0;
}