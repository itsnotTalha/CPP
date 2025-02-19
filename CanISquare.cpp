#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum=sum+x;
        }
        int z=sqrt(sum);
        if(pow(z,2)==sum){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}