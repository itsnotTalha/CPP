#include<bits/stdc++.h>
using namespace std;

int P[100], key[100], inMst[100];

struct AdjNode{
    int v;
    int w;
    AdjNode(int u, int w){
        this->v=u;
        this->w=w;
    }
};

struct PQNode{
    int v;
    int k;
    PQNode(int u, int w){
        this->v=u;
        this->k=w;
    }
};

struct Comaparator{
    bool operator()(PQNode a, PQNode b){
        return a.k<b.k;
    }
};

void Prims(vector<vector<AdjNode>> adjList, int V, int E, int s){
    for(int i = 1; i<=V; i++){
        key[i]=INT_MAX;
        P[i] = -1;
        inMst[i]=0;
    }
    key[s]=0;
    priority_queue<PQNode, vector<PQNode>, Comaparator> pq;
    pq.push(PQNode(s,0));

    while(!pq.empty()){
        PQNode n = pq.top();
        pq.pop();
        cout<<n.v<<" -> "<<endl;
        int u = n.v;

        if(inMst[u]) continue;
        inMst[u]= 1;

        for(auto x : adjList[u]){
            int v = x.v;
            int w = x.w;
            if(inMst[v]==0 and key[v]>w){
                key[v] = w;
                P[v] = u;
                pq.push(PQNode(v,w));
            }
        }
    }

    cout<<"Keys - "<<endl;
    for(auto x : key){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Parents - "<<endl;
    for(auto x : P){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"In MST -"<<endl;
    for(auto x : inMst){
        cout<<x<<" ";
    }
    cout<<endl;

}

int main(){
    int V,E;
    cin>>V>>E;

    vector<vector<AdjNode>> adjList(V+1, vector<AdjNode>());

    for(int i = 1; i<=E; i++){
        int u,v,w; cin>>u>>v>>w;
        adjList[u].push_back(AdjNode(v,w));
        adjList[v].push_back(AdjNode(u,w));
    }
    cout<<"GOt the input. Here's what you putted-\n";
    for(int i = 1; i<=V; i++){
        cout<<i<<" -> ";
        for(auto x : adjList[i]){
            cout<<"("<<x.v<<", "<<x.w<<") -> ";
        }
        cout<<" NULL"<<endl;
    }

    Prims(adjList, V, E, 1);
    cout<<"DONE"<<endl;
}