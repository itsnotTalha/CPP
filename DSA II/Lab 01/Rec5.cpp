#include<bits/stdc++.h>
using namespace std;
int numOfDig(int n){
    if(n/10==0){
        return 1;
    }
    return 1 + numOfDig(n/10);
}
int main(){
    cout<<numOfDig(5555);
    return 0;
}


