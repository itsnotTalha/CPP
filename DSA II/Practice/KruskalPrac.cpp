#include<bits/stdc++.h>
using namespace std;

int Parent[100];

struct Edge
{
    int u, v, w;
    Edge(int u, int v, int w){
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

void make_set(int v){
    Parent[v] = v;
}

int Find_set(int v){
    if(v==Parent[v]) return v;
    else return Find_set(Parent[v]);
}

void Union(int v, int u){
    int x = Find_set(v);
    int y = Find_set(u);

    if(x==y) cout<<"Under same set!!!"<<endl;
    else Parent[x] = y;
}

bool compare(Edge a, Edge b){
    return a.w<b.w;
}

void Kruskal(vector<Edge>edge, int V, int E){
    vector<Edge> selected_edge;

    for(int i = 1; i<=V; i++){
        make_set(i);
    }

    sort(edge.begin(), edge.end(), compare);
        for(auto &e : edge){
        cout<<"( "<<e.u<<", "<<e.v<<", "<<e.w<<" )"<<endl;
    }

    for(auto x : edge){
        int u = x.u;
        int v = x.v;
        int w = x.w;

        if(Find_set(u)!=Find_set(v)){
            selected_edge.push_back(x);
            Union(u,v);
        }
    }
    cout<<"Selected edges: "<<endl;
    for(Edge edge : selected_edge){
        cout<<"( "<<edge.u<<", "<<edge.v<<", "<<edge.w<<" )"<<endl;
    }

}

int main(){
    int V, E; cin>>V>>E;
    vector<Edge> edges;

    for(int i = 0; i<E; i++){
        int u,v,w; cin>>u>>v>>w;
        edges.push_back(Edge(u,v,w));
    }
    Kruskal(edges, V, E);
}

/*
7 11
1 2 2
2 3 19
1 7 8
7 6 21
1 6 14
2 6 25
6 3 17
6 5 13
3 5 5
3 4 9
5 4 1
*/
