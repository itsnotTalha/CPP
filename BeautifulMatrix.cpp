#include<bits/stdc++.h>
using namespace std;
int main(){
    int m=5 , n=5, tmp[5][5], column, row;
    for(int i = 1; i<=m ; i++){
        for(int j = 1 ; j<= n;j++){
            cin>>tmp[i-1][j-1];
            if(tmp[i-1][j-1]==1){
                row = i;
                column = j;
            }
        }
    }
    int count=0;
    while(row!=3||column!=3){
        if (row>3){
            row--;
            count++;
        }else if(row<3){
            row++;
            count++;
        }
        if(column>3){
            column--;
            count++;
        }else if(column<3){
            column++;
            count++;
        }
    }
    cout<<count;
    return 0;
}