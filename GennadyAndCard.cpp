#include<bits/stdc++.h>
using namespace std;
int main(){
    string target;
    cin>>target;
    vector<string>test(5);
    for(int i = 0; i<5; i++){
        cin>>test[i];
    }
    int found = 0;
    for(int i =0; i<5;i++){
       // cout<<target[0]<< "  "<<test[i][0]<<" t1 \n";
        //cout<<target[1]<< "  "<<test[i][1]<<" t2 \n";
        if(target[0]==test[i][0]) {
            found=1;
            break;
        }else if(target[1]==test[i][1]) {
            found = 1;
            break;
        }
    }
    cout<<(found ? "YES" : "NO")<<endl;
}