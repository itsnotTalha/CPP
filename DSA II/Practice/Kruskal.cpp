#include<bits/stdc++.h>
using namespace std;

struct Edge
{
    int u,v,w;
    Edge(int u, int v, int w){
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool comparator(Edge a, Edge b){
    return a.w<b.w;
}

int parent[100];

void make_set(int v){
    parent[v] = v;
}

int find_set(int v){
    if (v==parent[v]) return v;
    else return find_set(parent[v]);
}

void Union(int v, int u){
    int x = find_set(u);
    int y = find_set(v);

    if(x==y) cout<<"Under the same set!!!"<<endl;
    else parent[x]=y;
}

void Kruskal(vector<Edge>graph, int V, int E){
    vector<Edge> selected_edges;
    for(int i = 1; i<=V; i++) make_set(i);

    sort(graph.begin(), graph.end(), comparator);
    cout<<"After sorting-"<<endl;
    for(auto &e : graph){
        cout<<"( "<<e.u<<", "<<e.v<<", "<<e.w<<" )"<<endl;
    }

    for(Edge e : graph){
        int u = e.u;
        int v = e.v;
        int w = e.w;

        if(find_set(u)!=find_set(v)){
            selected_edges.push_back(e);
            Union(u,v);
        }
    }

    cout<<"Selected edges: "<<endl;
    for(Edge edge : selected_edges){
        cout<<"( "<<edge.u<<", "<<edge.v<<", "<<edge.w<<" )"<<endl;
    }

}

int main(){
    int V, E;
    cin>>V>>E;
    vector<Edge> edge;
    for(auto i = 1; i<=E; i++){
        int u,v,w;
        cin>>u>>v>>w;
        Edge e(u,v,w);
        edge.push_back(e);
    }
    Kruskal(edge, V, E);
}