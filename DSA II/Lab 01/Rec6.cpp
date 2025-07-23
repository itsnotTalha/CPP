#include<bits/stdc++.h>
using namespace std;
int a,b;
void fibonacci(int n){
    if(n==1){
        a = 0;
        cout<<a<<" ";
        return;
    }
    if(n==2){
        a = 0;
        b = 1;
        cout<<a<<" "<<b<<" ";
        return;
    }
    fibonacci(n-1);
    a = a+b;
    cout<<a<<" ";
    swap(a,b);
}
int main(){
    fibonacci(7);
}