#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>vc(t);
    for(int k =0; k<t;k++){
        int n;
        cin>>n;
        vc[k]=n/2;
    }
    for(int x:vc){
        cout<<x<<endl;
    }
    return 0;
}