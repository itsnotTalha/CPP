#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string str[n];
    int i=n;

    for(int i=0;i<n;i++){
        cin>>str[i];
        if(str[i].size()>10){
           str[i] = str[i][0] + to_string(str[i].size() - 2) + str[i].back();
        }
    }
    for(string x : str){
        cout<<x<<endl;
    }

    return 0;
}