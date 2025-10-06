#include <bits/stdc++.h>
using namespace std;

struct Node {
    int vertex, dist, edges;
    bool operator>(const Node &other) const {
        // Prefer paths with fewer edges when distances are equa
        return edges > other.edges;
    }
};

void Dijkstra(vector<vector<pair<int, int>>> &adj, int V, int src) {
    vector<int> dist(V + 1, INT_MAX);
    vector<int> parent(V + 1, -1);
    vector<int> edgesFromSrc(V + 1, INT_MAX);
    vector<bool> visited(V + 1, false);

    priority_queue<Node, vector<Node>, greater<Node>> pq;
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

            // If we found a path with same distance but fewer edges, prefer it
            // Or if we found a better distance
            if (newDist < dist[v] || (newDist == dist[v] && newEdges < edgesFromSrc[v])) {
                // Only update if the new path has <= 3 edges, 
                // OR if it's the only available path (even with 3 edges)
                if (newEdges <= 3 || dist[v] == INT_MAX) {
                    dist[v] = newDist;
                    parent[v] = u;
                    edgesFromSrc[v] = newEdges;
                    pq.push({v, newDist, newEdges});
                }
            }
        }
    }

    // Print results
    for (int i = 1; i <= V; i++) {
        cout << "Path from source to vertex " << i;
        
        if (dist[i] == INT_MAX) {
            cout << " -> No path found\n";
            continue;
        }
        
        // Reconstruct path
        vector<int> path;
        for (int cur = i; cur != -1; cur = parent[cur])
            path.push_back(cur);
        reverse(path.begin(), path.end());
        
        cout << " ->";
        for (int j = 0; j < path.size(); j++) {
            cout << path[j];
            if (j < path.size() - 1) cout << "->";
        }
        cout << "\nDistance: " << dist[i] << endl;
    }
}

int main() {
    int V = 9;
    int src = 1;

    vector<vector<pair<int, int>>> adj(V + 1);
    
    // Add edges
    vector<tuple<int, int, int>> edges = {
        {1, 2, 2},
        {8, 5, 100},
        {2, 3, 1},
        {3, 4, 3},
        {4, 5, 2},
        {1, 6, 1},
        {6, 3, 6},
        {3, 7, 1},
        {5, 7, 4},
        {7, 8, 1},
        {1, 9, 2},
        {9, 8, 6}
    };

    for (auto &edge : edges) {
        int u = get<0>(edge);
        int v = get<1>(edge);
        int w = get<2>(edge);
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    Dijkstra(adj, V, src);
    return 0;
}