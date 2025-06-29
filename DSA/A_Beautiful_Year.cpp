#include<bits/stdc++.h>
using namespace std;
bool isDistinct(int y){
    int freq[10]={0};
  while(y!=0){
        freq[y%10]++;
        if(freq[y%10]>1){
            return false;
        }
        y/=10;
    }
    return true;
}
int main(){
    int a;
    cin>>a;
    while(!isDistinct(++a));
    cout<<a;
    return 0;
}