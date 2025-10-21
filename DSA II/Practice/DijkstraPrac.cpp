#include<bits/stdc++.h>
using namespace std;


int P[100], key[100], inMst[100];

struct AdjList{
    int vertex, weight;
    AdjList(int v, int w){
        vertex = v;
        weight = w;
    }
};

struct PQNode
{
    int vertex, k;
    PQNode(int v, int w){
        vertex = v;
        k = w;
    }
};

struct Comparator
{
    bool operator()(PQNode a, PQNode b){
        return a.k>b.k;
    }
};

void Dijkstra(vector<vector<AdjList>> adjList, int V, int E, int s, int d){
    for(int i = 1; i<=V; i++){
        key[i]=INT_MAX;
        P[i] = -1;
        inMst[i] = 0;
    }

    priority_queue<PQNode, vector<PQNode>, Comparator> pq;

    key[s] = 0;
    pq.push(PQNode(s, 0));

    while(!pq.empty()){
        PQNode node = pq.top();
        pq.pop();
        int u = node.vertex;
        if(inMst[u]) continue;
        inMst[u] = 1;

        for(auto x : adjList[u]){
            int v, w;
            v = x.vertex;
            w = x.weight;
            if(inMst[v]==0 and key[u] + w < key[v]){
                key[v] = key[u] + w;
                P[v] = u;
                pq.push(PQNode(v,key[v]));
            }
        }
    }
    cout<<"Shortest path from "<<s<<" to "<<d<<" - "<<endl;
    int total = key[d];
    int i = d;
    while(i!=-1){
        cout<<i<<" - > ";
        i = P[i];
    }
    cout<<"MAX = "<<total;
}

int main(){
    int V,E; cin>>V>>E;

    vector<vector<AdjList>> adjList(V+1, vector<AdjList>());
    for(int i = 1; i<=E; i++){
        int u, v,w; cin>>u>>v>>w;
        adjList[u].push_back(AdjList(v,w));
        adjList[v].push_back(AdjList(u,w));
    }
    cout<<"GOt the input. Here's what you putted-\n";
    for(int i = 1; i<=V; i++){
        cout<<i<<" -> ";
        for(auto x : adjList[i]){
            cout<<"("<<x.vertex<<", "<<x.weight<<") -> ";
        }
        cout<<" NULL"<<endl;
    }
    Dijkstra(adjList, V, E, 8, 4);
}
