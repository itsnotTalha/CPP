#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string m = "codeforces";
    cin>>t;
    int arr[t]={};
    for(int i=0;i<t;i++){
      string s;
      cin>>s;
      
      for(int j=0;j<10;j++){
        if(s[j]!=m[j]){
            arr[i]++;
        }
      }
    }
    for(int x : arr){
        cout<<x<<endl;
    }
    return 0;
}