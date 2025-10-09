#include<bits/stdc++.h>
using namespace std;

struct Edge{
    int u, v;
    double log_w;
    Edge(int u, int v, int w){
        this->u = u;
        this->v = v;
        this->log_w = log(w);
    }
};

int parent[100];

void makeSet(int v){
    parent[v] = v;
}

bool comparator(Edge e1, Edge e2){
    return e1.log_w < e2.log_w;
}

int findSet(int v){
    if(v == parent[v]){
        return v;
    } else {
        return parent[v] = findSet(parent[v]); 
    }
}

void Union(int a, int b){
    int x = findSet(a);
    int y = findSet(b);
    if(x != y){
        parent[x] = y;
    }
}

void Kruskal(vector<Edge> allGraphEdges, int V, int E){
    vector<Edge> selectedEdges;
    for(int v = 1; v <= V; v++){
        makeSet(v);
    }
    sort(allGraphEdges.begin(), allGraphEdges.end(), comparator);

    for(Edge edge : allGraphEdges){
        int u = edge.u;
        int v = edge.v;
        
        if(findSet(u) != findSet(v)){
            selectedEdges.push_back(edge);
            Union(u, v);
        }
    }

    cout << "Selected edges:" << endl;
    double total_log_sum = 0;
    long long product = 1;
    
    for(Edge edge : selectedEdges){
        total_log_sum += edge.log_w;
        cout <<edge.u << "--" << edge.v << endl;
    }
    
    cout << "Minimum product: " << exp(total_log_sum) << endl;
}

int main(){
    vector<Edge> allGraphEdges;
    int V, E;
    cout << "Enter the number of vertices and edges: ";
    cin >> V >> E;
    cout << "Enter the edges (u,v,w):" << endl;
    for(int i = 1; i <= E; i++){
        int u, v, w;
        cin >> u >> v >> w;
        Edge edge(u, v, w);
        allGraphEdges.push_back(edge);
    }

    Kruskal(allGraphEdges, V, E);
    return 0;
}