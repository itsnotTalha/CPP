#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> operation = {"5","-2","4","C","D","9","+","+"} ;
    stack<int>s;
    for(int i=0; i<operation.size(); i++){
        if(!s.empty() and operation[i]=="C"){
            s.pop();
        }else if(!s.empty() and operation[i]=="D"){
            int ans = s.top()*2;
            s.push(ans);
        }else if(!s.empty() and operation[i]=="+"){
            int tmp = s.top();
            s.pop();
            int ans = s.top()+tmp;
            s.push(tmp);
            s.push(ans);
        }else s.push(stoi(operation[i]));
    }
    long long ans = 0;
    while(!s.empty()){
        ans+=s.top();
        s.pop();
    }
    cout<<ans;
}