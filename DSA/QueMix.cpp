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
    return F==-1;
}
bool isCFull(){
    return F==(R+1)%sz;
}
void enqueCir(int n){
    if(!isCFull()){
        if(F==-1){
            R = F = 0;
        }else{
            R = (R+1)%sz;
        }
        qlist[R]=n;
    }else{
        cout<<"OVERFLOW\n";
    }
}
void dequeCir(){
    if(!isCmt()){
        if(F==R){
            F = R = -1;
        }else{
            F = (F+1)%sz;
        }
    }else{
        cout<<"UNDERFLOW\n";
    }
}

void printC(){
    for(int i = F; i<=R; i=(i+1)%sz)
    cout<<qlist[i]<<" ";
    cout<<endl;
}

//Linkedlist
struct Node{
    int data;
    Node *next;
};
Node *front, *back;
bool isMt(){
    return front==NULL;
}
void enQue(int n){
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = NULL;
    if(isMt()){
        front = back = newNode;
        return;
    }
    back->next = newNode;
    back = newNode;
}
void dque(){
    Node *tmp = front;
    if(tmp){
        if(front==back)
        front = back = NULL;
        else
        front = front->next;
        delete tmp;
    }else{
        cout<<"UNDERFLOW"<<endl;
        return;
    }
}
void printLL(){
    Node *tmp = front;
    while(tmp){
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int main(){
    enQue(10);
    enQue(50);
    enQue(30);
    enQue(20);
    printLL();
    dque();
    dque();
    dque();
    dque();
    dque();
    printLL();
}