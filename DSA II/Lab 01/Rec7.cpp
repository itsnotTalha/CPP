#include<bits/stdc++.h>
using namespace std;
int powr(int n, int b){
    if(b==1){
        return n;
    }
    return n * powr(n,b-1);
}
int main(){
    cout<<powr(5,3);
    return 0;
}



