#include<bits/stdc++.h>
using namespace std;
const int MAXN = 200005;
int Parent[MAXN], Color[MAXN], dist[MAXN];

void DFS(vector<vector<int>> adjList, int V, int E, int src, int targ){
    for(int i = 1; i<=V; i++){
        dist[i] = INT_MAX;
        Parent[i] = -1;
        Color[i] = 'W';
    }

    dist[src] = 0;
    Parent[src] = -1;
    Color[src] = 'G';

    stack<int> q;
    q.push(src);

    while(!q.empty()){
        int u = q.top();
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
    if(Parent[targ]==-1){
        cout<<1<<endl;
    }else
    cout<<0<<endl;
}

void solve(){
    int V, E;
    cin>>V>>E;
    
    vector<vector<int>> adjList(V+1, vector<int>());

    for(int i = 1; i<=E; i++){
        int u,v; cin>>u>>v;
        adjList[u].push_back(v);
    }
    int q; cin>>q;
    while(q--){
        int x,y; cin>>x>>y;
        DFS(adjList, V, E, x, y);
    }
}

int main(){
    int t; cin>>t;
    for(int i = 1; i<=t; i++){
        cout<<"Case "<<i<<":\n";
        solve();
    }
}
