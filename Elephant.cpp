#include<bits/stdc++.h>
using namespace std;
int  main(){
    int x;
    cin >> x;
    if(x%5==0){
        cout << x/5;
    }else if(x%4==0){
        cout << x / 4;
    }else if(x%3==0){
        cout << x/4;
    }else if(x%2==0){
        cout<< x/2;
    }else{
        cout << x/1;
    }
    return 0;
}