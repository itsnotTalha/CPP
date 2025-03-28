#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    vector<int>a={0};
    while(q--){
        int r;
        cin>>r;
        if(r==1){
            int x; cin>>x;
            a.push_back(x);
        }else{
            if(a.size()<2){
                cout<<0<<endl;
            }else{
                cout<<a.back()<<endl;
                a.pop_back();
            }
        }
    }
}