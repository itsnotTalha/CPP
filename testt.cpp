#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=6,b=9;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b<<"\n";
}