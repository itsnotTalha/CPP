#include<bits/stdc++.h>
using namespace std;
int solve(){
    int a,b,c;
    int count=0;
    cin>>a>>b>>c;
    count += abs(c-b);
    count += abs(c-1);
    if(count>(a-1)){
        return 1;
    }else if(count<(a-1)){
        return 2;
    }else{
        return 3;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}