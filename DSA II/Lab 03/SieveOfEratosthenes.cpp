#include<bits/stdc++.h>
using namespace std;

vector<int>P(100,1);
int main(){
    P[1] = 0;
    int n = 99;
    int last = sqrt(n)+1;
    for(int i = 2; i<=last; i++){
        if(P[i])
        for(int j = i+1; j<=n; j++){
            if(j%i==0) P[j] = 0;
        }
    }
    for(int x : P) cout<<x<<" ";
}