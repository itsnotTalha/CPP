#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string W;
        cin>>W;
        if (W.size() >= 2) {
            W.pop_back(); 
            W.back() = 'i';  
        }
        cout<<W<<endl;
    }
    return 0;
}