#include <bits/stdc++.h>
using namespace std;

struct Node {
    int vertex, dist, edges;
    
};
struct Compare {
    bool operator()(Node &a, Node &b) {
        return a.edges > b.edges; // Min-heap based on distance
    }
};

void Dijkstra(vector<vector<pair<int, int>>> &adj, int V, int src) {
    vector<int> dist(V + 1, INT_MAX);
    vector<int> parent(V + 1, -1);
    vector<int> edgesFromSrc(V + 1, INT_MAX);
    vector<bool> visited(V + 1, false);

    priority_queue<Node, vector<Node>, Compare> pq;
    pq.push({src, 0, 0});
    dist[src] = 0;
    edgesFromSrc[src] = 0;

    while (!pq.empty()) {
        Node cur = pq.top();
        pq.pop();
        int u = cur.vertex;

        if (visited[u]) continue;
        visited[u] = true;

        for (auto &edge : adj[u]) {
            int v = edge.first;
            int w = edge.second;
            int newDist = cur.dist + w;
            int newEdges = cur.edges + 1;

            if (newEdges > 3) {
                continue;
            }

            if (newDist < dist[v]) {
                dist[v] = newDist;
                edgesFromSrc[v] = newEdges;
                parent[v] = u;
                pq.push({v, newDist, newEdges});
            }
            else if (newDist == dist[v] && newEdges < edgesFromSrc[v]) {
                edgesFromSrc[v] = newEdges;
                parent[v] = u;
                pq.push({v, newDist, newEdges});
            }
        }
    }

    //printing the path
    for (int i = 1; i <= V; i++) {
        cout << "Path from source to vertex " << i<<endl;
        
        if (dist[i] == INT_MAX) {
            cout << "-> No path found\n";
            continue;
        }
        
        vector<int> path;
        for (int cur = i; cur != -1; cur = parent[cur])
            path.push_back(cur);
        reverse(path.begin(), path.end());
        
        cout << "-> ";
        for (int j = 0; j < path.size(); j++) {
            cout << path[j];
            if (j < path.size() - 1) cout << " -> ";
        }
        cout << "\nDistance: " << dist[i] << endl;
    }
}

int main() {
    int V, E, src;
    
    cout << "Enter the number of vertices and edges" << endl;
    cin >> V >> E;
    
    cout << "Enter the source vertex :" << endl;
    cin >> src;
    
    vector<vector<pair<int, int>>> adj(V + 1);
    
    cout << "Enter the edges (u,v,w)" << endl;
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    Dijkstra(adj, V, src);
    return 0;
}

/*
9 12
1 
1 2 2 
8 5 100 
2 3 1 
3 4 3 
4 5 2 
1 6 1 
6 3 6 
3 7 1 
5 7 4 
7 8 1 
1 9 2 
9 8 6 
*/