#include<bits/stdc++.h>
using namespace std;
struct Node{
    int value;
    Node *next;
};
Node *head = NULL; 
void addLast(int n){
    Node *newNode = new Node;
    newNode->value = n;
    newNode->next = NULL;
    if(head==NULL){
        head = newNode;
        return;
    }
    Node *ptr = head;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    ptr->next = newNode;
}
void addFirst(int n){
    Node *newNode = new Node;
    newNode->value=n;
    newNode->next=head;
    head = newNode;
}
void addAt(int n,int index){
    int i=0;
    Node *newNode = new Node;
    newNode->value = n;
    newNode->next = NULL;
    Node *ptr = head;
    if(index<=0){
        addFirst(n);
        return;
    }
    while(ptr->next!=NULL){
        i++;
        if(i==index)
            break;
        ptr = ptr->next;
    }
    newNode->next = ptr->next;
    ptr->next = newNode;
}
void display(){
    Node *ptr = head;
    while(ptr!=NULL){
        cout<<ptr->value<<" ";
        ptr = ptr->next;
    }
}
int main(){
    addLast(10);
    addLast(30);
    addLast(20);
    addFirst(55);
    addFirst(99);
    addAt(44,2);
    display();
}