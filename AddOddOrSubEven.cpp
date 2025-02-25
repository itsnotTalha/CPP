#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        int count=0;
        if(a<b){
           if((b-a)%2==0)
           count = 2;
           else
           count =1;
        }else if(a>b){
            if((a-b)%2==0)
            count = 1;
            else
            count = 2;
        }
        cout<<count<<endl;
    }
    return 0;
}