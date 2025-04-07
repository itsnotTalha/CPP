#include<bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    Node* next;
};

Node* head = NULL;

void addFirst(int n){
    Node* newNode = new Node;
    newNode->value = n;
    newNode->next = NULL;

    newNode->next = head;
    head = newNode;
}

void addLast(int n){
    Node* newNode = new Node;
    newNode->value = n;
    newNode->next = NULL;

    Node* ptr = head;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }

    ptr->next = newNode;
}

void addAt(int n, int k){
    Node* newNode = new Node;
    int i =1;
    Node* ptr = head;
    while(ptr->next!=NULL){
        if(k==1) {
            addFirst(n);
            return;
        }
        if(i==k-1)break;
        ptr = ptr->next;
        i++;
    }

    newNode->value = n;
    newNode->next = ptr->next->next;
    ptr->next = newNode;
}

void delFirst(){
    Node* tmp = head;

    head = tmp->next;
    delete tmp;
}

void delLast(){
    Node* tmp = head;
    while(tmp->next->next!=NULL){
        tmp = tmp->next;
    }
    tmp->next = NULL;
}

void delAt(int k){
    Node* ptr = head;
    int i = 1;
    while(ptr->next!=NULL){
        if(k==1){
            delFirst();
            return;
        }
        if(i==k-1) break;
        ptr = ptr->next;
        i++;
    }
    Node* tmp = ptr->next;
    ptr->next = tmp->next;
    delete tmp;

}

void display(){
    Node* ptr = head;
    while(ptr!=NULL){
        cout<<ptr->value<<" ";
        ptr=ptr->next;
    }
}

int main(){
    addFirst(10); 
    addFirst(40); 
    addFirst(20);
    addLast(30); 
    addLast(80); 
    addLast(50);
    addAt(100,6);
    addLast(99);
    delAt(2);
    delFirst();
    delLast();
    display(); 
}