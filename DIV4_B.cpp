#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int l, r, n, m;
        cin>>n>>m>>l>>r;
        vector<int>arr(n);
        pair<int, int>a;
        a={0,0};
        for(int i = 0; i<m;i++){
            if(abs(a.first)-1>=l) a.first--;
            else if(abs(a.second)+1<=r) a.second++;
            //else if(abs(a.first)-1>=l) a.first--;
            //(i%2==0 && a.second<=r)
        }
        cout<<a.first<<" "<<a.second<<endl;
    }
}