#include<bits/stdc++.h>
using namespace std;
long long int sum(long long int n){
    long long int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main(){
    long long int n,s;
    cin>>n>>s;
    long long int count = 0;
    while(true){
        if(n-sum(n)>=s){
            count++;
            n--;
        }else{
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}