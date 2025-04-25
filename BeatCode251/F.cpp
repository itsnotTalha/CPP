#include <bits/stdc++.h>
using namespace std;

#define Fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

typedef long long ll;


int main() {
    Fast_io;
    int n; cin>>n;
    string s1, s2;
    int sum1 =0;
    int sum2 =0;
    cin>>s1;
    cin>>s2;
    for(int i =0; i<n; i++){
        if(s1[i]>='A' && s1[i]<='Z') sum1+=((100-abs('A'-s1[i])));
        else sum1+=(74-abs('a' - s1[i]));
    }
    for(int i =0; i<n; i++){
        if(s2[i]>='A' && s2[i]<='Z') sum2+=((100-abs('A'-s2[i])));
        else sum2+=(74-abs('a' - s2[i]));
    }
    if(sum1>sum2)cout<<"Ronaldo"<<endl;
    else if(sum1<sum2) cout<<"Messi"<<endl;
    else cout<<"Both"<<endl;
}
