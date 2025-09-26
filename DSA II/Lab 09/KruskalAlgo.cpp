/*
    Sort in ascending order based on weight
    5, 4, 1
    1, 2, 2
    3, 5, 5
    1, 7, 8
    3, 4, 9
    6, 5, 13
    1, 6, 14
    3, 6, 17
    2, 3, 19
    7, 6, 21
    2, 6, 25

    Now for each edge (u,v) element of G.E ascending order by weight
        if FindSet(u) != FindSet(v)
            A = A U {(u,v)}
            Union(u,v)
*/
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
    /* data */
};

int Parent[100];
struct Compare
{
    bool operator()(Edge a, Edge b){
        return a.w<b.w;
    }
    /* data */
};

int findSet(int v){
    if(v==Parent[v]) return v;
    return findSet(Parent[v]);
}


void Kruskal(vector<Edge> &allGraph, int V, int E){
    vector<Edge> selectedEdge;
    for(int i = 1; i<=V; i++){
        makeSet(i);
    }
    sort(allGraph.begin(), allGraph.end(), Compare);

    for(Edge edge : allGraph){
        int u = edge.u;
        int v = edge.v;
        int w = edge.w;

        if(findSet(u)!=findSet(v)){
            selectedEdge.push_back(edge);
            Union(u,v);
        }
    }
}

int main(){
    cout<<"Enter vertex and edge : ";
    int v, e; cin>>v>>e;

    vector<Edge> allGraph;
    for(int i = 1; i<=e; i++){
        int s, en, w; cin>>s>>en>>w;
        Edge e1 = 
    }
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