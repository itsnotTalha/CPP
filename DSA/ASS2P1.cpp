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

void makegraph(int a, int b){
    Node *newNode = new Node;
    newNode->val = b; 
    newNode->next = NULL;

    if(g[a]==NULL){
        g[a] = newNode;
        return;
    }
    newNode->next = g[a];
    g[a] = newNode;
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
            cout << "Min number of edges between ("<<cur<<","<<dest<<"): " << d[dest] << endl;
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
        cout << "Destination " << dest << " not reachable from " << src << endl;
    }
}

int main(){
    V = 9;
    makegraph(0,1);
    makegraph(0,7);
    makegraph(1,7);
    makegraph(1,2);
    makegraph(2,3);
    makegraph(2,5);
    makegraph(2,8);
    makegraph(3,4);
    makegraph(3,5);
    makegraph(4,5);
    makegraph(5,6);
    makegraph(6,7);
    makegraph(7,8);
    makegraph(1,0);
    makegraph(7,0);
    makegraph(7,1);
    makegraph(2,1);
    makegraph(3,2);
    makegraph(5,2);
    makegraph(8,2);
    makegraph(4,3);
    makegraph(5,3);
    makegraph(5,4);
    makegraph(6,5);
    makegraph(7,6);
    makegraph(8,7);

    BFS(0,5);
    BFS(3,8);
    BFS(2,6);
}