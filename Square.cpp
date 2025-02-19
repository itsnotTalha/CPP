#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x[4],y[4];
        for(int i=0;i<4;i++){
            cin>>x[i]>>y[i];
        }
        int result=0;
        for(int i=1;i<4;i++){
            if(x[i]!=x[i-1]){
                result= pow((x[i]-x[i-1]),2);
                break;
            }
        }
        cout<<result<<endl;
    }
    return 0;
}