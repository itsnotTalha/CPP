#include<bits/stdc++.h>
using namespace std;

int parent[100];
int color[100];
int dist[100];

void BFS(vector<vector<int>> &adjList, int V, int E, int src){
    for(int i = 1; i<=V; i++){
        dist[i] = INT_MAX;
        color[i] = 'W';
        parent[i] = -1;
    }
    
    dist[src] = 0;
    parent[src] = -1;
    color[src] = 'G';

    queue<int> Q;
    Q.push(src);

    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        color[u] = 'B';

        for(auto v : adjList[u]){
            if(color[v]=='W'){
                color[v] = 'G';
                Q.push(v);
                dist[v] = 1 + dist[u];
                parent[v] = u;
            }
        }
    }

    for(int i = 1; i<=V; i++){
        cout<<"V = "<<i<<", Color = "<<(char)color[i]<<", Dist = "<<dist[i]<<", Parent = "<<parent[i]<<endl;
    }
}


int main(){
    int V,E;
    //taking vertices and edges from user
    cin>>V>>E;

    vector<vector<int>> adjList(V+1, vector<int>());

    for(int i = 1; i<=E; i++){
        int u, v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    cout<<"Adj List - >"<<endl;
    for(int i = 1; i<=V; i++){
        cout<<i<<" -> ";
        for(auto x : adjList[i]){
            cout<<x<<" -> ";
        }
        cout<<endl;
    }
    cout<<"After BFS->"<<endl;
    BFS(adjList, V,E,1);
}