#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        int count =0;
        count+= abs(x2-x1);
        count+= abs(y2-y1);
        cout<<count<<endl;
    }
    return 0;
}