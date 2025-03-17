#include<bits/stdc++.h>
using namespace std;
int main(){
    long long T;
    cin>>T;
    while(T--){
        long long N;
        cin>>N;
        vector<int>a(N);
        vector<int>b(N);
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        int m=a[0];
        for(int i=0;i<N;i++){
            if(a[i]>=m){
                b[i]=1;
                m=a[i];
            }
            else{
                b[i]=0;
            }
        }
        for(int d:b){
            cout<<d<<" ";
        }
        cout<<endl;
    }
}