#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> tickets = {2,3,2};
    int k = 2;
    int total  = 0;
    queue<int> indx;
    for(int i = 0; i<tickets.size(); i++){
        indx.push(i);
    }
    while(!indx.empty()){
        total++;
        if(k==indx.front() and tickets[indx.front()]==0)
        //return total;
        break;

        if(tickets[indx.front()]!=0){
            indx.push(indx.front());
        }
        indx.pop();
        //return total;
    }
    cout<<total;
}