#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h, total=0;
    cin >> n >> h;
    for(int i =0; i<n;i++){
        int temp;
        cin >> temp;
        if(temp>h){
            total+=2;
        }else{
            total++;
        }
    }
    cout<<total;
    return 0;
}