#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 0,tmp=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>0){
            tmp+=x;
        }else{
            if(tmp>0){
                tmp--;
            }else{
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}