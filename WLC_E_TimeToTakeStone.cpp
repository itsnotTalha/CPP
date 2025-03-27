#include<bits/stdc++.h>
using namespace std;
#define for0(i,x) for(int i=0;i<x;i++)
#define for1(i,x) for(int i=1;i<=x;i++)
typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> k(m);
    for (int i = 0; i < m; ++i) {
        cin >> k[i];
    }
    
    vector<bool> dp(n + 1, false); 
    int partc = 0,lp=0;
    while(n>0){
        n-=k[lp];
        if(partc%2==1)lp++;
        if(lp>=k.size())lp=0;
        //if(n<=0)break;
        partc++;
        //cout<<partc<<" n "<<n<<" k "<<k[lp]<<" lp "<<lp<<endl;
    }

    cout << (partc%2==0 ? 1 : 2) << endl;
    
    return 0;
}
