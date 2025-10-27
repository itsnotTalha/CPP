#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n;
    // cout<<n%m<<endl;
    cout<<"Hash 1: ";
    cout<<(2*n+7)%13<<endl;
    cout<<"Hash 2: "<<(3*n %13)+1<<endl;
}