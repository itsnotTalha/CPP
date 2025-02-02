#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,b;
    float total=0.0;
    cin >> n;
    b=n;
    while(n--){
        float a;
        cin >> a;
        total += a;
    }
    total/=b;
    cout << total;
    return 0;
}