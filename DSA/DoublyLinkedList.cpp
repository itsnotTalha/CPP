#include<bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    Node* next;
    Node* prev;
};

Node* head = NULL;

void addFirst(int n){
    Node* newNode = new Node;
    newNode->value = n;
    newNode->next = NULL;
    newNode->prev = NULL;

    if(head==NULL){
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
    newNode->next->prev = newNode;
}

void addLast(int n){
    Node* ptr = head;
    Node* newNode = new Node;
    newNode->value = n;
    newNode->next = NULL;
    newNode->prev = NULL;

    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    newNode->prev = ptr;
    ptr->next = newNode;
    
}

void display(){
    Node* ptr = head;
    while(ptr!=NULL){
        cout<<ptr->value<<" ";
        ptr = ptr->next;
    }
}

int main(){
    addFirst(10);
    addFirst(40);
    addFirst(30);
    //addLast(55);
    display();
}