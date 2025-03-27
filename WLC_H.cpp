#include<bits/stdc++.h>
using namespace std;
#define for1(i,x) for(int i=1;i<=x;i++)
#define for0(i,x) for(int i=0;i<x;i++)
int main(){
    int N;
    cin>>N;
    vector<int>a(N);
    for0(i,N){
        cin>>a[i];
    }
    int cnt = 1; 
    int tmp = a[0];
    int flag = 0; 
    
    for1(i,N-1) {
        if (a[i] == tmp) {
            cnt++; 
            if (cnt == 3) {
                flag = 1; 
                break;    
            } 
        } else {
            tmp = a[i];
            cnt = 1;
        }
    }
    cout<<(flag?"YES":"NO")<<endl;
}