#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
typedef struct Node node;

void menu();
node* createNode();
void printList(node* head);
node* insert_head(node* head, node* nn);
node* insert_tail(node* head, node* nn);
node* insertAtNthPosition(node* head, node* nn, int n, int position);
node* delete_head(node *head);
int ListSize(node* head);
node* delete_tail(node *head);
node* delete_nth(node *head, int n, int position);
bool duplicateChecker(node* head, int n);
node* findNth(node* head, int n);
node* copyFirst(node* head, int k);
void bubbleSort(node* head);

int main()
{
    node* head = NULL, *nn;
    printf("use free() in c or including stdlib.h, use delete() in c++\n");
    int choice;
    menu();
    scanf("%d",&choice);

    while(choice!=0)
    {
        if(choice==1)
        {
            printList(head);
        }
        else if(choice==2)
        {
            nn= createNode();
            //checking if duplicate exist...If exist then it will return true, else we can proceed to add
            if(duplicateChecker(head, nn->data)){
                cout<<"Duplicate data Exists!"<<endl;
            }else{
                head = insert_head(head,nn);
            }
        }
        else if(choice==3)
        {
            nn=createNode();
            if(duplicateChecker(head, nn->data)){
                cout<<"Duplicate data Exists!"<<endl;
            }else{
                head=insert_tail(head, nn);
            }
        }
        else if(choice==4)
        {
            int len = ListSize(head);
            printf("List Size: %d\n\n",len);
        }
        else if(choice==5)
        {
            nn=createNode();
            if(duplicateChecker(head, nn->data)){
                cout<<"Duplicate data Exists!"<<endl;
            }else{
                int n = ListSize(head);
                printf("Enter position:");
                int position;
                scanf("%d",&position);
                if(position>=1 && position<=n+1)
                {
                    head=insertAtNthPosition(head,nn,n, position);
                }
                else
                {
                    printf("Invalid Position!\n\n");
                }
            }

        }
        else if(choice==6)
        {
            head = delete_head(head);
        }
        else if(choice==7)
        {
            head = delete_tail(head);
        }
        else if(choice==8)
        {
            int n, position;
            n = ListSize(head);
            printf("enter position: ");
            scanf("%d",&position);

            if(position >= 1 && position <= n)
            {
                head = delete_nth(head, n, position);
            }
            else
            {
                printf("invalid position\n\n");
            }
        }
        else if(choice==9){
            cout<<"Enter partitioning position: ";
            int k; cin>>k;
            int size = ListSize(head);
            if(findNth(head,k)==NULL or k<0 or k>=size){
                cout<<"Invalid K-th position"<<endl;
                //continue;
                // 1 2 3 4 | 5 NULL
            }else{
                node* firstList;
                node* lastList;
                firstList = copyFirst(head,k);                
                lastList = findNth(head,k)->next;
                
                cout<<"First Half ";
                printList(firstList);
                cout<<"Last Half ";
                printList(lastList);
            }
        }
        else if(choice==10){
            bubbleSort(head);
        }
        else
        {
            printf("Invalid Choice!\n");
        }
        menu();
        scanf("%d",&choice);
    }

    printf("\nYour pressed the Exit button!\nbye...\n");
}

node* createNode()
{
    node* nn=new node();
    printf("Enter data:");
    scanf("%d",&nn->data);
    nn->next = NULL;
    return nn;
}

void printList(node* head)
{
    node* temp = head;
    printf("Data in Linked List:\n\n");
    if(temp==NULL)
    {
        printf("No Data Found!\n");
    }
    else
    {
        while(temp != NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
    printf("\n\n");
}

node* insert_head(node* head, node* nn)
{
    node* temp = head;
    if(head!=NULL)
    {
        nn->next=head;
    }
    head=nn;
    printf("Node inserted in Head!\n\n");
    return head;
}

node* insert_tail(node* head, node* nn)
{
    node* temp = head;
    if(temp==NULL)
    {
        head = insert_head(head,nn);
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = nn;
    }
    printf("Node inserted in Tail!\n\n");
    return head;
}

node* insertAtNthPosition(node* head, node* nn, int n, int position)
{
    node* temp = head;
    if(position==1)
    {
        head=insert_head(head,nn);
    }
    else if(position==n+1)
    {
        head=insert_tail(head,nn);
    }
    else
    {
        for(int i=1; i<=position-2; i++)
        {
            temp=temp->next;
        }
        nn->next=temp->next;
        temp->next=nn;
    }
    printf("Data inserted at nth position!\n\n");
    return head;
}

node* delete_head(node *head)
{
    if(head == NULL)
    {
        printf("nothing to delete\n\n");
    }
    else
    {
        node *temp;
        temp = head;

        head = head->next;
        delete(temp);
    }
    printf("Node deleted!\n\n");
    return head;
}

int ListSize(node* head)
{
    node* temp= head;
    int counter=0;
    while(temp != NULL)
    {
        counter++;
        temp=temp->next;
    }
    return counter;
}

node* delete_tail(node *head)
{
    int n;
    n = ListSize(head);

    if(n <= 1)
    {
        head = delete_head(head);
    }
    else
    {
        int i;
        node *temp;
        temp = head;

        for(i = 1; i <= n-2; i++)
        {
            temp = temp->next;
        }
        delete(temp->next);
        temp->next = NULL;
    }
    printf("Tail Node deleted!\n\n");
    return head;
}

node* delete_nth(node *head, int n, int position)
{
    if(position == 1)
    {
        head = delete_head(head);
    }
    else if(position == n)
    {
        head = delete_tail(head);
    }
    else
    {
        node *temp, *del;
        temp = head;
        int i;

        for(i = 1; i <= position-2; i++)
        {
            temp = temp->next;
        }
        del = temp->next;
        temp->next = del->next;
        delete(del);

    }
    printf("%d position Node deleted!\n\n",position);
    return head;
}

node* findNth(node* head, int n){
    node* temp = head;
    if(temp==NULL){
        cout<<"No data exist!"<<endl;
        return temp;
    }
    int counter = 0;
    while(temp){
        if(counter==n) return temp;
        counter++;
        temp = temp->next;
    }
    return NULL;
}

bool duplicateChecker(node* head, int n){
    if(head==NULL) return false;
    node* temp = head;
    while(temp){
        if(temp->data==n) return true;
        temp = temp->next;
    }
    return false;
}

void bubbleSort(node* head){
    int n = ListSize(head);
    for(int i = 0; i<n; i++){
        for(int j = 0 ; j<n-i-1; j++){
            node* a = findNth(head,j);
            node* b = findNth(head,j+1);
            if(a->data>=b->data){
                swap(a->data, b->data);
            }
        }
    }
    cout<<"Linked list sorted using Bubble Sort."<<endl;
}

node* copyFirst(node* head, int k){
    node* newHead = new node{head->data, NULL};
    node* newTail = newHead;

    node* current = head->next;
    int count = 1;

    while (current != NULL && count <= k) {
        newTail->next = new node{current->data, NULL};
        newTail = newTail->next;
        current = current->next;
        count++;
    }
    return newHead;
}

void menu()
{
    printf("1) Print List\n");
    printf("2) Insert Data at Head\n");
    printf("3) Insert Data at Tail\n");
    printf("4) Size of Linked List\n");
    printf("5) Insert Data at Nth Position\n");
    printf("6) Delete Head data\n");
    printf("7) Delete Tail data\n");
    printf("8) Delete Nth position data\n");
    printf("9) Partition at Kth Element\n");
    printf("10) Sort the list using Bubble Sort\n");
    printf("0) Exit\n");
    printf("Enter your choice:");
}
