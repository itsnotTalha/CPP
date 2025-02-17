#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char ch[n][m];
    int color=0,bw=0;
    for(int i=0;i<n;i++){
        for(int j=0; j<m;j++){
            cin>>ch[i][j];
            if(ch[i][j]=='C'||ch[i][j]=='M'||ch[i][j]=='Y'){
                color++;
            }else{
                bw++;
            }
        }
    }
    if(color>0){
        cout<<"#Color"<<endl;
    }else{
        cout<<"#Black&White"<<endl;
    }
    return 0;
}