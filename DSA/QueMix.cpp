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

//Circular
bool isCmt(){
    return !F==-1;
}
bool isCFull(){
    return !(F==0 and R==sz-1) or R+1==F;
}
void enqueCir(int n){
    if(isCmt()){
        if(F==-1){
            R = F = 0;
        }else{
            R++;
        }
        qlist[R]=n;
    }else{
        cout<<"OVERFLOW\n";
    }
}
void dequeCir(){
    if(isCmt()){
        if(F==R){
            F = R = -1;
        }else{
            F++;
        }
    }else{
        cout<<"UNDERFLOW\n";
    }
}

int main(){
    enqueCir(10);
    enqueCir(50);
    enqueCir(30);
    enqueCir(20);
    printLin();
    dequeCir();
    dequeCir();
    printLin();
}