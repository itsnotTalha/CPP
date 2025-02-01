#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b;
    int max=0, total=0;
    cin>>n;
    while(n--){
        cin >> a >> b;
        total-=a;
        total+=b;
        if(total>=max){
            max=total;
        }
    }
    cout<<max;
    return 0;
}