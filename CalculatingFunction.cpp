#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,sum=0;
    cin >> n;
     cout << (n % 2 == 0 ? n / 2 : -((n + 1) / 2));
    return 0;
}