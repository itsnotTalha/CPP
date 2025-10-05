#include <bits/stdc++.h>
using namespace std;

int key[100], Parent[100];
bool inMST[100];

struct Compare {
    bool operator()(pair<int,int> &a, pair<int,int> &b) {
        return a.first > b.first; // Min-heap based on distance
    }
};

void Dijkstra(vector<vector<pair<int,int>>> &adj, int v, int s) {
    // Initialization
    for (int i = 1; i <= v; i++) {
        key[i] = INT_MAX;
        Parent[i] = -1;
        inMST[i] = false;
    }

    key[s] = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, Compare> pq;
    pq.push({0, s}); // {distance, node}

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        if (inMST[u]) continue;
        inMST[u] = true;

        for (auto edge : adj[u]) {
            int v = edge.first;
            int w = edge.second;

            if (!inMST[v] && key[v] > key[u] + w) {
                key[v] = key[u] + w;
                Parent[v] = u;
                pq.push({key[v], v});
            }
        }
    }

    // --- Output Section ---
    cout << "\n Shortest Path Results (from Source: " << s << ")\n\n";
    cout << left << setw(10) << "Node"
         << setw(20) << "Shortest Distance"
         << "Path\n";
    cout << string(50, '-') << "\n";

    int total = 0;
    for (int i = 1; i <= v; i++) {
        total += key[i];
        cout << left << setw(10) << i;
        cout << setw(20) << key[i];

        // Reconstruct path
        vector<int> path;
        int cur = i;
        while (cur != -1) {
            path.push_back(cur);
            cur = Parent[cur];
        }
        reverse(path.begin(), path.end());
        for (int j = 0; j < path.size(); j++) {
            cout << path[j];
            if (j != path.size() - 1) cout << " -> ";
        }
        cout << endl;
    }

    cout << "\nTotal of all shortest distances = " << total << "\n";
    cout << "Dijkstras algorithm executed successfully!\n";
}

int main() {
    int V, E;
    cin >> V >> E;
    vector<vector<pair<int,int>>> adj(V + 1);

    for (int i = 1; i <= E; i++) {
        int s, e, w;
        cin >> s >> e >> w;
        adj[s].push_back({e, w});
        adj[e].push_back({s, w}); // Undirected graph
    }

    Dijkstra(adj, V, 1);
    return 0;
}
