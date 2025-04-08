#include<bits/stdc++.h>
using namespace std;
struct Node{
    int value;
    Node* next;
};

Node *head = NULL, *tail = NULL;
int len = 0;
void addLast(int n){
    len++;
    Node* ptr = head;
    Node* newNode = new Node;
    newNode->value = n;
    newNode->next = NULL;
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
   // while(ptr->next!=NULL){
       // ptr = ptr->next;
   // }
    tail->next = newNode;
    tail = newNode;
    //len++;
}

Node* getVal(int ind){
    Node *ptr = head;
    int i=1;
    while(ptr!=NULL){
        if(i==ind) return ptr;
        ptr = ptr->next;
        i++;
    }
}

void reversed(){
    int i = 1, j=len;
    while(j>=i){
        /*int tmp = getVal(i)->value;
        getVal(i)->value = getVal(j)->value;
        getVal(j)->value = tmp;*/
        swap(getVal(i)->value, getVal(j)->value);
        i++;
        j--;
    }
}

void display(){
    Node* ptr = head;
    while(ptr!=NULL){
        cout<<ptr->value<<" ";
        ptr = ptr->next;
    }
}

int main(){
    addLast(10);
    addLast(3);
    addLast(15);
    addLast(20);
    addLast(7);
    cout<<"Before Reverse-"<<endl;
    display();
    cout<<endl<<"After Reverse-"<<endl;
    //cout<<getVal(2)->value;
    reversed();
    display();
}
