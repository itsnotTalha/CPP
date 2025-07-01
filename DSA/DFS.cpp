#include<bits/stdc++.h>
using namespace std;
#define INF 100000
struct Node{
    int v,w;
    Node *next;
};
Node *g[10];
int V,E,color[10],discover[10],finish[10],t;
void makeGraph(int s,int d,int w){
    Node *new_node = new Node;
    new_node->v = d;
    new_node->w = w;
    new_node->next = NULL;

    if(g[s]==NULL){
        g[s] = new_node;
        return;
    }
    new_node->next = g[s];
    g[s] = new_node;

}
void printList(Node *tmp){
    while(tmp){
        cout<<"("<<tmp->v<<","<<tmp->w<<")->";
        tmp = tmp->next;
    }
}
void DFS_visit(int s){
    t = t+1;
    color[s] = 'green';
    discover[s] = t;

    Node *vertices = g[s];
    while(vertices){
        int neighbor = vertices->v;
        if(color[neighbor]=='white'){
            DFS_visit(neighbor);
        }
        vertices = vertices->next;
    }
    t = t+1;
    finish[s] = t;
    color[s] = 'yellow';
    cout<<s<<"->";
}
void DFS(){
    int city = 0;
    for(int i=0;i<V;i++){
        color[i]='white';
    }
    t=0;
    for(int i=0;i<V;i++){
        if(color[i]=='white'){
            DFS_visit(i);
            city++;
        }
    }
    //cout<<city<<"  cities."<<endl;
}
int main(){
    cin>>V>>E;
    int a,b,w;
    for(int i=1;i<=E;i++){
        cin>>a>>b;
        makeGraph(a,b,1);
    }
    cout<<"------Graph-------"<<endl;
    for(int i=0;i<V;i++){
        cout<<"Adjacent of"<<i<<":";
        Node *ptr = g[i];
        printList(ptr);
        cout<<endl;
    }
    DFS();
    return 0;
}
/*
8 12
0 2
1 0
1 2
1 3
2 4
3 2
4 3
4 5
6 3
6 5
6 7
7 4
*/

