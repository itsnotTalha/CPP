#include<bits/stdc++.h>
using namespace std;
int main(){
    int Y,W;
    cin>>Y>>W;
    int m=max(Y,W);
    int chances = (6-m)+1;
    int total = 6;
    int g = __gcd(chances,total);
    cout<<(chances/g)<<"/"<<(6/g);
    return 0;
}