#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    int evn = n/2;
    if(evn%2==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    cout<<evn;

}
int main(){
    int n;
    cin>>n;
    solve(n);
    return 0;
}