#include<bits/stdc++.h>
using namespace std;

void solve(){
    string p, s; cin>>p>>s;
    int i = 0; 
    int j = 0;
    int n = p.size();
    int m = s.size();
    
    bool chk = true;
    while (i < n && j < m) {
        char current_p = p[i];
        if (current_p != 'L' && current_p != 'R') {
            chk = false; 
            break;
        }
        
        if (j >= m) {
            chk = false; 
            break;
        }
        
        if (s[j] != current_p) {
            chk = false;
            break;
        }
        
        if (j + 1 < m && s[j + 1] == current_p) {
            j += 2;
        } else {
            j += 1;
        }
        
        i++;
    }
    cout<<(chk?"YES":"NO")<<endl;
}

int main() {
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}