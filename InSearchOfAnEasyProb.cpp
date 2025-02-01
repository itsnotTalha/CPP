#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    bool a = true;
    cin>>n;
    while(n--){
        int tmp;
        cin>>tmp;
        if(tmp==1){
            a = false;
            break;
        }
    }
    if(a){
        cout << "EASY";
    }else{
        cout << "HARD";
    }
    return 0;
}