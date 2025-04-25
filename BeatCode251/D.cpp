#include <bits/stdc++.h>
using namespace std;

#define Fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

typedef long long ll;
#define for0(i, n) for(int i = ; i < int(n); i++)


int main() {
    Fast_io;
    vector<int> ct(4);
    for(int i =0; i<4;i++){
        cin>>ct[i];
    }
    int k, m;
    cin>>k>>m;
    sort(ct.begin(), ct.end(), greater<int>());
    int sum = 0;
    for(int i = 0; i<k; i++){
        sum+=ct[i];
    }
    int ctM = round(sum/k);
    ll total = 10+40+ctM+m;
    if(total>=90){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
