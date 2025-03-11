#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*next;
};
Node *head = NULL;

int main(){
    Node *n1 = new Node;
    n1->data= 7;
    n1->next = NULL;
    head = n1;

    Node *n2 = new Node;
    n2->data= 10;
    n2->next=NULL;
    head->next = n2;
    Node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }

return 0;
}
