#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,tmp=0;
    cin>>n>>m;
    for(int i=0; i<n;i++){
        if(i%2==0){
            for(int j=0; j<m;j++){
                cout<<"#";
            }
        }else if(!tmp){
            for(int j=0;j<m;j++){
                cout<<(j==m-1?"#":".");
            }
            tmp++;
        }else if(tmp){
            for(int j=0;j<m;j++){
                cout<<(j==0?"#":".");
            }
            tmp--;
        }
        cout<<endl;
    }
    return 0;
}