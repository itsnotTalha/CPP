#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, count=0;
    cin >> n;
    while(n--){
        int temp1=0, temp2=0,temp3=0;
        cin >> temp1 >> temp2 >> temp3;
        if((temp1+temp2+temp3)>=2){
            count++;
        }
    }
    cout<<count;
    return 0;
}