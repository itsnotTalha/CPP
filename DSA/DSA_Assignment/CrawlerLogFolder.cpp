#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> logs = {"d1/","d2/","../","d21/","./"};
    int count = 0;
    for(int i = 0; i<logs.size(); i++){
        int t = 0;
        if(logs[i]=="../"){
            count = max (0, count-1);
        }else if(logs[i]=="./"){
            continue;
        }else{
            count++;
        }
    }
    cout<<count;
}