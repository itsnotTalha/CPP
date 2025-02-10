#include<bits/stdc++.h>
using namespace std;
string solve(){
    string s;
    cin>>s;
    int arr[6];
    for(int i =0 ; i<6 ; i++){
        arr[i]=s[i]-'0';
    }
    if(arr[0]+arr[1]+arr[2]==arr[3]+arr[4]+arr[5]){
        return "YES";
    }else{
        return "NO";
    }
}
int main(){
    int t;
    cin>>t;
    string s[t];
    for(int i =0; i<t;i++){
       s[i]=solve();
    }
    for(string z: s){
        cout<<z<<endl;
    }
    return 0;
}