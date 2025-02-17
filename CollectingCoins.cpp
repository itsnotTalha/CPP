#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c,n;
        cin>>a>>b>>c>>n;
        int m = max(max(a,b),c);
        int count=0;
        count+=(m-a)+(m-b)+(m-c);
        n-=count;
        if(n>=0 && n%3==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}