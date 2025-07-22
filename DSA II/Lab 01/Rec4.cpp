#include<bits/stdc++.h>
using namespace std;
int sumOfDig(int n){
    if(n/10==0){
        return n%10;
    }
    return n%10 + sumOfDig(n/10);
}
int main(){
    cout<<sumOfDig(5555);
    return 0;
}


