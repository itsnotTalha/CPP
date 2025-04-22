#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

Node *Head = NULL;
Node *Tail = NULL;
Node *Middle = NULL;

void addFirst(int n)
{
    Node *newNode = new Node;
    newNode->value = n;
    newNode->next = NULL;
    if (Head == NULL)
    {
        Head = newNode;
        Tail = newNode;
        Middle = newNode;
    }
    else
    {
        newNode->next = Head;
        Head = newNode;
    }
}

void insertAtMiddle(int n)
{

    Node *newNode = new Node;
    newNode->value = n;
    newNode->next = NULL;

    if (Head == NULL)
    {
        addFirst(n);
    }
    else
    {
        
    }
}

void displayll()
{
    Node *ptr = Head;
    while (ptr != NULL)
    {
        cout << ptr->value << " ";
        ptr = ptr->next;
    }
}

void addLast(int n)
{
    Node *newNode = new Node;
    newNode->value = n;
    newNode->next = NULL;
    if (Head == NULL)
    {
        Head = newNode;
        Tail = newNode;
    }
    else
    {
        Tail->next = newNode;
        Tail = newNode;
    }
}
void deleteMax()
{
    Node *ptr = Head;
    // search for max
    int max = 0;
    while (ptr != NULL)
    {
        if (ptr->value > max)
            max = ptr->value;
        ptr = ptr->next;
    }
    // now we will stop  right before that max elem
    ptr = Head;
    while (ptr->next != NULL)
    {
        if(ptr->next->value == max) break;
        ptr = ptr->next;
    }
    cout<<max<<" Deleted\n";
    Node *tmp = ptr->next;
    ptr->next = ptr->next->next;
    delete tmp;

}

void addMiddle(int n){
    Node *newNode = new Node;
    newNode->value = n;
    newNode->next = NULL;

    if(Head==NULL){
        Head = newNode;
    }else if(Middle==NULL){
        Middle = Head;
        Middle->next = newNode;

    }else{
        Middle->next = newNode;
        Middle = Middle->next;
    }
}

int main()
{
    /*
    insertAtMiddle(200);
    insertAtMiddle(6);
    addFirst(10);
    addFirst(50);
    addFirst(30);
    addLast(80);
    cout<<"\nBeforeDeletion: "<<endl;
    displayll();
    //cout << Middle->value << endl;
    cout<<"\nAfterDeletion: "<<endl;
    deleteMax();
    */
    addMiddle(10);
    addMiddle(30);
    addMiddle(20);
    addMiddle(100);
    displayll();
}
