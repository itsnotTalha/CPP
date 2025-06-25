#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> tickets = {2,3,2};
    int k = 2;
    int total  = 0;
    queue<int> q;
    for(int x : tickets) q.push(x);
    int tmp = tickets[k];
    int i = 0;
    while(tmp){
        if(q.front()-1>0){
            q.push(q.front()-1);
            q.pop();
        }else{
            q.pop();
        }
        if(i%k==0) tmp--;
        total++;
        i++;
    }
    cout<<total;
}