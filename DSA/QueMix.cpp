#include<bits/stdc++.h>
using namespace std;

//Linked list with array
const int sz = 10;
int qlist[sz], F=-1,R=-1;

bool isFull(){
    if(R==sz-1){
        cout<<"OVERFLOW\n";
        return true;
    }
    return false;
}
bool isEmpty(){
    if(F==-1){
        cout<<"UNDERFLOW\n";
        return true;
    }
    return false;
}
void enqueLin(int n){
    if(!isFull()){
        if(F==-1){
            F = R = 0;
        }else{
            R++;
        }
        qlist[R]=n;
    }
}
void dequeLin(){
    if(!isEmpty()){
        if(F==R){
            R = F = -1;
        }else{
           F++;
        }
    }
}
void printLin(){
    for(int i = F; i<=R; i++)
    cout<<qlist[i]<<" ";
    cout<<endl;
}

int main(){
    enqueLin(10);
    enqueLin(50);
    enqueLin(30);
    enqueLin(20);
    printLin();
    dequeLin();
    dequeLin();
    printLin();
}