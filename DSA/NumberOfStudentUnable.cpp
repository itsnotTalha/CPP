#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> students = {1,1,1,0,0,1};
    vector<int> sandwiches = {1,0,0,0,1,1};
    queue<int> q1;
    int start = 0;
    for(int i = 0; i<students.size(); i++){
        q1.push(students[i]);
    }
    int last = 0;
    while(!q1.empty() and last<q1.size()){
        if(sandwiches[start]==q1.front()){
            last = 0;
            q1.pop();
            start++;
        }else{
            last++;
            q1.push(q1.front());
            q1.pop();
        }
    }
    cout<<q1.size();
}