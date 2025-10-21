#include<bits/stdc++.h>
using namespace std;

int Parent[100], Color[100], dist[100];

void BFS(vector<vector<int>> adjList, int V, int E, int src){
    for(int i = 1; i<=V; i++){
        dist[i] = INT_MAX;
        Parent[i] = -1;
        Color[i] = 'W';
    }

    dist[src] = 0;
    Parent[src] = -1;
    Color[src] = 'G';

    queue<int> q;
    q.push(src);

    while(!q.empty()){
        int u = q.front();
        q.pop();
        Color[u] = 'B';

        for(auto v : adjList[u]){
            if(Color[v]=='W'){
                Color[v] = 'G';
                q.push(v);
                dist[v] = 1 + dist[u];
                Parent[v] = u;
            }
        }
    }
cout << "\n\n--- BFS Result ---\n";
    for (int i = 1; i <= V; i++) {
        cout << "V = " << i 
             << ", Color = " << (char)Color[i]
             << ", Dist = " << dist[i]
             << ", Parent = " << Parent[i] << endl;
    }
}

int main(){
    int V, E;
    cin>>V>>E;
    vector<vector<int>> adjList(V+1, vector<int>());

    for(int i = 1; i<=E; i++){
        int u,v; cin>>u>>v;
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
    BFS(adjList, V, E, 1);
}