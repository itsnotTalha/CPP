#include<bits/stdc++.h>
using namespace std;
vector<int>memo(100,-1);

int fibonacchi(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    if (memo[n]!=-1){
        return memo[n];
    }
    int value1 = fibonacchi(n-1);
    int value2 = fibonacchi(n-2);

    memo[n] = value1+value2;
    return value1+value2;
}

int main(){
    int n; cin>>n;
    memo[0] = 0;
    memo[1] = 1;
    
    int result = fibonacchi(n);
    cout<<"result = "<<result<<endl;

}