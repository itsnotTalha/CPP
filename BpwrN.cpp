#include<bits/stdc++.h>
using namespace std;
int computeBN(int b, int n){
    if(n==0) return 1;
    int b1 = computeBN(b, n/2);
    if(n%2==0) return b1*b1;
    return b*b1*b1;
}
int main(){
    cout<<computeBN(2,5);
}