#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> x;
    for(int i=0;i<3;i++){
        int s;
        cin>>s;
        x.insert(s);
    }
    int min = *x.begin();
    int max = *prev(x.end());
    cout<<(max-min);
    return 0;
}