#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    set<int>result;
    cin>>n;
    int p;
    cin>>p;
    for(int i=0; i<p;i++){
        int tmp;
        cin>>tmp;
        result.insert(tmp);
    }
    int q;
    cin>>q;
    for(int i=0; i<q;i++){
        int tmp;
        cin>>tmp;
        result.insert(tmp);
    }
    
     if (result.size() == n) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }

    return 0;
}