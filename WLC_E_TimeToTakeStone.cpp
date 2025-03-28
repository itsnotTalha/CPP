#include<bits/stdc++.h>
using namespace std;
#define for0(i,x) for(int i=0;i<x;i++)
#define for1(i,x) for(int i=1;i<=x;i++)
typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> k(m);
    for0(i,m) {
        cin >> k[i];
    }
    
    int partc = 1,lp=0;
    for(int i=0;i<m;){
        n-=k[i];
        if(partc%2==0)i++;
       // if(lp>=k.size())lp=0;
        //if(n<=0)break;
        partc++;
        //cout<<partc<<" n "<<n<<" k "<<k[lp]<<" lp "<<lp<<endl;
    }

    cout << (partc%2==0 ? 1 : 2) << endl;
    
    return 0;
}
