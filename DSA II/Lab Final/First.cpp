#include<bits/stdc++.h>
using namespace std;

int key[100], parent[100], inMst[100], isSafe[100];

struct AdjList{
    int v, w;
    AdjList(int a, int b){
        v = a;
        w = b;
    }
};

struct PQNode{
    int k, w;
    PQNode(int a, int b){
        k  = a;
        w = b;
    }
};

struct Comparator{
    bool operator()(PQNode a, PQNode b){
        return a.w>b.w;
    }
};

void Dijkstra(vector<vector<AdjList>> adjList, int V, int E, int src){
    for(int i = 1; i<=V; i++){
        key[i] = INT_MAX;
        parent[i] = -1;
        inMst[i] = 0;
    }

    priority_queue<PQNode,vector<PQNode>, Comparator> pq;


    key[src] = 0;
    pq.push(PQNode(src, 0));

    while(!pq.empty()){
        PQNode node = pq.top();
        pq.pop();
        int u = node.k;
        if(inMst[u]) continue;
        inMst[u] = 1;

        for(auto x : adjList[u]){
            int v, w;
            v = x.v;
            w = x.w;
            if(inMst[v]==0 and key[u] + w < key[v] and isSafe[v]=='N'){
                key[v] = key[u] + w;
                parent[v] = u;
                pq.push(PQNode(v,key[v]));
            }
        }
    }
    for(int j = 1; j<=V; j++){
        if(j==src) continue;
        cout<<"Shortest path from "<<src<<" to "<<j<<" - "<<endl;
        int total = key[j];
        int i = j;
        while(i!=-1){
            cout<<i<<" - > ";
            i = parent[i];
        }
        cout<<endl;

    }
//    cout<<"Shortest path from "<<src<<" to "<<2<<" - "<<endl;
//    int total = key[2];
//    int i = 7;
//    while(i!=-1){
//        cout<<i<<" - > ";
//        i = parent[i];
//    }
    //cout<<total;


}

int main(){
    int V, E; cin>>V>>E;
    for(int i = 1; i<=V; i++){
        char ch; cin>>ch;
        isSafe[i] = ch;
    }
    vector<vector<AdjList>> adjList(V+1, vector<AdjList>());

    for(int i = 1; i<=E; i++){
        int u,v,w;
        cin>>u>>v>>w;
        adjList[u].push_back(AdjList(v,w));
    }
    cout<<"**********Adj List**********\n";
    for(int i = 1; i<=V; i++){
        for(auto x : adjList[i]){
            cout<<"("<<x.v<<","<<x.w<<")";
        }
        cout<<endl;
    }
    cout<<"**********Adj List**********\n";

    Dijkstra(adjList, V, E, 1);
}

/*
8 9
N N C N N C N N
1 2 7
1 3 1
3 2 2
1 4 1
4 6 1
6 7 2
4 5 10
5 7 10
6 8 1
*/
