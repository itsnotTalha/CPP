#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    long long result[t];
    for(int i=0; i<t;i++){
        long long int a,b;
        cin>>a>>b;
        result[i]=(b-a)/10;
        if(result[i]<0){
            (result[i]*=-1);
            result[i]++;
        }else{
            result[i]+=1;
        }
        if((b-a)%10==0){
            result[i]--;
        }
    }
    for(int x:result){
        cout<<x<<endl;
    }
    return 0;
}