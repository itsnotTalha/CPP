#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    print(n-1);
    cout<<n<<" ";
}
int main(){
    print(5);
    return 0;
}
