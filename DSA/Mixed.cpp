#include<bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    Node *next;
};

Node *Head = NULL;
Node *Tail = NULL;

void Merge(vector<int>&a, int l, int mid, int h){
    int size = (h-l+1);
    vector<int> tmp(size);
    int i = l, j = mid+1, k = 0;
    while(i<=mid && j<=h){
        if(a[i]>=a[j]){
            tmp[k++] = a[i++];
        }else{
            tmp[k++] = a[j++];
        }
    }
    while(i<=mid){
        tmp[k++]=a[i++];
    }
    while(j<=h){
        tmp[k++] = a[j++];
    }
    for(int v = 0; v< size; v++){
        a[l+v] = tmp[v];
    }
}

void MSort(vector<int>&a, int l , int h){
    if(l<h){
        int mid = (l+h)/2;
        MSort(a, l, mid);
        MSort(a, mid+1, h);
        Merge(a, l, mid, h);
    }
}

void display(vector<int>A){
    for(int x : A){
        cout<<x<<" ";
    }
    cout<<endl;
}

void selectionSort(vector<int>&a){
    int size = a.size();
    for(int i = 0; i<size; i++){
        int tmp = i;
        for(int j = i+1; j<size; j++){
            if(a[j]<a[tmp]) tmp = j;
        }
        swap(a[i], a[tmp]);
    }
}

void addFirst(int n){
    Node *newNode = new Node;
    newNode->value = n;
    newNode->next = NULL;
    if(Head==NULL){
        Head = newNode;
        Tail = newNode;
    }else{
        newNode->next = Head;
        Head = newNode;
    }
    
}

void displayll(){
    Node *ptr = Head;
    while(ptr!=NULL){
        cout<<ptr->value<<" ";
        ptr = ptr->next;
    }
}

void addLast(int n){
    Node *newNode = new Node;
    newNode->value = n;
    newNode->next = NULL;
    if(Head==NULL){
        Head = newNode;
        Tail = newNode;
    }else{
        Tail->next = newNode;
        Tail = newNode;
    }

}

vector<int> getVal(){
    Node *ptr = Head;
    vector<int> a;
    while(ptr!=NULL){
        a.push_back(ptr->value);
        ptr = ptr->next;
    }
    return a;
}

void sortll(){
    vector<int> a = getVal();
    MSort(a, 0, a.size());
    Node *ptr = Head;
    int i = 0;
    while(ptr!=NULL){
        ptr->value = a[i++];
        ptr = ptr->next;
    }
}

int main(){
    vector<int> a = {1, 5,3,2,6,7};
    //MSort(a, 0, 6);
    selectionSort(a);
    display(a);

    addFirst(10);
    addFirst(50);
    addFirst(30);
    addLast(50);
    addLast(80);
    addLast(70);
    sortll();
    displayll();
}