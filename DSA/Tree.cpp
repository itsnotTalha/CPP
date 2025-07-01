#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node *left;
    Node *right;
};
Node *insertNode(Node *root,int v){
    if(root==NULL){
        Node *n = new Node;
        n->val = v;
        n->left = NULL;
        n->right = NULL;
        root = n;
    }
    else if(v<root->val){
        root->left = insertNode(root->left,v);
    }
    else if(v>root->val){
        root->right = insertNode(root->right,v);
    }
    return root;
}
void inorder(Node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->val<<"->";
    inorder(root->right);
}
int findMin(Node *root){
    if(root==NULL){
        return -1;
    }
    if(root->left==NULL){
        return root->val;
    }
    else{
        return findMin(root->left);
    }
}
int findMax(Node *root){
    if(root==NULL){
        return -1;
    }
    if(root->right==NULL){
        return root->val;
    }
    else{
        return findMax(root->right);
    }
}
bool searchItem(Node *root,int item){
    if(root==NULL){
        return false;
    }
    if(item<root->val){
        return searchItem(root->left,item);
    }
    else if(item>root->val){
        return searchItem(root->right,item);
    }
    else{
        return true;
    }
}
int findParent(Node *root, int v){
    if(root==NULL || root->val==v){
        return NULL;
    }
    if((root->left && root->left->val==v) || (root->right && root->right->val==v)){
        return root->val;
    }
    else if(v<root->val){
        return findParent(root->left,v);
    }
    else if(v>root->val){
        return findParent(root->right,v);
    }
}
Node *findMaxNode(Node *root){
    if(root==NULL){
        return root;
    }
    if(root->right==NULL){
        return root;
    }
    else{
        return findMaxNode(root->right);
    }
}
Node *deleteNode(Node *root,int v){
    if(root==NULL){
        return NULL;
    }
    if(v<root->val){
        root->left = deleteNode(root->left,v);
    }
    else if(v>root->val){
        root->right = deleteNode(root->right,v);
    }
    else{
        if(root->left==NULL && root->right==NULL){
            delete root;
            root = NULL;
        }
        else if(root->left==NULL){
            Node *tmp = root;
            root = root->right;
            delete tmp;
        }
        else if(root->right==NULL){
            Node *tmp = root;
            root = root->left;
            delete tmp;
        }
        else{/// has both child
            Node *tmp = findMaxNode(root->left);
            root->val = tmp->val;
            root->left = deleteNode(root->left,tmp->val);
        }
    }
    return root;
}
int main(){
    Node *root = NULL;
    root = insertNode(root,15);
    root = insertNode(root,9);
    root = insertNode(root,23);
    root = insertNode(root,4);
    root = insertNode(root,12);
    root = insertNode(root,20);
    root = insertNode(root,26);
    root = insertNode(root,2);
    root = insertNode(root,7);
    root = insertNode(root,13);
    root = insertNode(root,1);
    root = insertNode(root,5);
    root = insertNode(root,8);
    root = insertNode(root,14);
    root = insertNode(root,17);
    root = insertNode(root,22);
    root = insertNode(root,24);
    root = insertNode(root,29);
    root = insertNode(root,6);
    cout<<root->left->right->right->val<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Mininum: "<<findMin(root)<<endl;
    cout<<"Maximum: "<<findMax(root)<<endl;
    cout<<searchItem(root,11)<<endl;
    cout<<"Parent: "<<findParent(root,20)<<endl;
    root = deleteNode(root,1);
    inorder(root);
    cout<<endl;
    root = deleteNode(root,13);
    inorder(root);
    cout<<endl;
    root = deleteNode(root,9);
    inorder(root);
    cout<<endl;
    return 0;
}