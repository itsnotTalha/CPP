#include<bits/stdc++.h>
using namespace std;
int main(){
    string strNum;
    int num;
    cin>>strNum;
    for(int i = 0; i<strNum.size(); i++){
        num = num*10 +((int)strNum[i]-'0');
    }
    cout<<num+1;
    return 0;
}