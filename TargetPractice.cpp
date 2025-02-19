#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s[10];
        int total =0;
        for(int i=0;i<10;i++){
            cin>>s[i];
        }
        for(int i=0;i<10;i++){
            for(int j =0;j<10;j++){
                if((i==0||i==9||j==0||j==9)){
                    if(s[i][j]=='X')
                    total+=1;
                }else if(i==1||i==8||j==1||j==8){
                    if(s[i][j]=='X')
                    total+=2;
                }else if(i==2||i==7||j==2||j==7){
                    if(s[i][j]=='X')
                    total+=3;
                }else if(i==3||i==6||j==3||j==6){
                    if(s[i][j]=='X')
                    total+=4;
                }else if(i==4||i==5||j==4||j==5){
                    if(s[i][j]=='X')
                    total+=5;
                }
            }
        }
        cout<<total<<endl;
    }
    return 0;
}