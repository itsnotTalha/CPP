#include<bits/stdc++.h>
using namespace std;

#define tmpNext tmp=tmp->next

struct Node
{
    int val, w;
    Node *next;
};

int V,E;
Node *g[10] = {};

void makegraph(int a, int b, int w){
    Node *newNode = new Node;
    newNode->val = b;
    newNode->w = w;
    newNode->next = NULL;

    if(g[a]==NULL){
        g[a] = newNode;
        return;
    }
    newNode->next = g[a];
    g[a] = newNode;
}

void printList(Node *tmp){
    while(tmp){
        cout<<"("<<tmp->val<<","<<tmp->w<<")->";
        tmpNext;
    }
}

void printPath(int p[], int j) {
    if (p[j] == -1) {
        cout << j;
        return;
    }
    printPath(p, p[j]);
    cout << " -> " << j;
}

void BFS(int src, int dest){
    int d[V],p[V];
    bool seen[V];

    for(int i = 0; i < V; i++){
        d[i] = INT_MAX;
        seen[i] = false;
        p[i] = -1;
    }

    seen[src] = true;
    d[src] = 0;
    queue<int> Q;
    Q.push(src);

    cout << "BFS Traversal: ";
    while(!Q.empty()){
        int cur = Q.front();
        Q.pop();

        cout << cur << " ";

        if (cur == dest) {
            cout << endl;
            cout << "Shortest path from " << src << " to " << dest << ": ";
            printPath(p, dest);
            cout << endl;
            cout << "Shortest distance: " << d[dest] << endl;
            return;
        }

        Node *neighbor = g[cur];
        while(neighbor){
            int n = neighbor->val;
            if(!seen[n]){
                seen[n] = true;
                d[n] = d[cur] + 1;
                p[n] = cur;
                Q.push(n);
            }
            neighbor = neighbor->next;
        }
    }
    cout << endl;
    if (d[dest] == INT_MAX) {
        cout << "Destination " << dest << " not reachable from source " << src << endl;
    }
}

int main(){
    cin>>V>>E;
    for(int i = 0; i<E; i++){
        int a, b, w; cin>>a>>b>>w;
        makegraph(a,b,w);
        makegraph(b,a,w);
    }
    for(int i = 0; i<V; i++){
        cout<<"Adjacent list of "<<i<<": ";
        Node *ptr = g[i];
        printList(ptr);
        cout<<endl;
    }
    BFS(1,3);
}