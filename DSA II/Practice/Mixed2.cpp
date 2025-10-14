#include<bits/stdc++.h>
using namespace std;

//Fractional Knapsack
/*
struct Item
{
    string name;
    float price, weight, priceByWeight, portionTaken;
    Item(string name, float p, float w){
        this->name = name;
        price = p;
        weight = w;
        priceByWeight = p/w;
    }
};

bool comparator(Item a, Item b){
    return a.priceByWeight>b.priceByWeight;
}

void FracKnap(vector<Item>items, int C){
    sort(items.begin(), items.end(), comparator);
    // cout<<"Sorted entries : "<<endl;
    // for(auto x : items){
    //     cout<<"Name : "<<x.name<<" Price: "<<x.price<<" Weight: "<<x.weight<<" Unit Price: "<<x.priceByWeight<<endl;
    // }
    
    vector<Item> selectedItem;
    float profit = 0;
    int i = 0;
    while(C>0 and i<items.size()){
        if(items[i].weight<=C){
            profit+=items[i].price;
            C-=items[i].weight;
            items[i].portionTaken = 1;
            selectedItem.push_back(items[i]);
        }else{
            profit+=(items[i].priceByWeight*C);
            items[i].portionTaken = C/items[i].weight;
            C=0;
            selectedItem.push_back(items[i]);
        }
        i++;
    }
    cout<<"Selected Items: "<<endl;
    for(auto x : selectedItem){
        cout<<"Name : "<<x.name<<" Price: "<<x.price<<" Weight: "<<x.weight<<" Unit Price: "<<x.priceByWeight<<endl;
    }
    cout<<"Total profit : "<<profit<<endl;
}

int main(){
    int n, C; cin>>n>>C;
    vector<Item> items;
    for(int i = 0; i<n; i++){
        string name;
        float price, weight;
        cin>>name>>price>>weight;
        Item item (name, price, weight);
        items.push_back(item);
    }
    cout<<"You have entered : "<<endl;
    for(auto x : items){
        cout<<"Name : "<<x.name<<" Price: "<<x.price<<" Weight: "<<x.weight<<" Unit Price: "<<x.priceByWeight<<endl;
    }
    
    FracKnap(items, C);
}

*/

//Kruskal Algo

/*
int parent[100];

struct Edge
{
    int u,v,w;
    Edge(int u, int v, int w){
        this->u=u;
        this->v = v;
        this->w = w;
    }
};

bool comparator(Edge a, Edge b){
    return a.w<b.w;
}

void make_set(int v){
    parent[v] = v;
}

int Find(int a){
    if(parent[a]==a) return a;
    else return Find(parent[a]);
}

void Union(int a, int b){
    int x = Find(a);
    int y = Find(b);

    if(x==y) cout<<"Under the same set!!!"<<endl;
    else parent[x]=y;
}

void Kruskal(vector<Edge> edge, int V, int E){
    for(int i=1; i<=V; i++) make_set(i);
    sort(edge.begin(), edge.end(), comparator);

    vector<Edge> selected;
    
    for(Edge e : edge){
        int u = e.u;
        int v = e.v;
        int w = e.w;

        if(Find(u)!=Find(v)){
            selected.push_back(e);
            Union(u,v);
        }
    }

    for(Edge edge : selected){
        cout<<"( "<<edge.u<<", "<<edge.v<<", "<<edge.w<<" )"<<endl;
    }
}

int main(){
    int V,E;
    cin>>V>>E;
    vector<Edge> edges;
    for(int i = 1; i<=E; i++){
        int u, v, w;
        cin>>u>>v>>w;
        Edge e(u,v,w);
        edges.push_back(e);
    }
    Kruskal(edges, V,E);
}
*/

//BFS
int parent[100], color[100], dist[100];

void BFS(vector<vector<int>>edges, int V, int E, int src){
 for(int i = 1; i<=V; i++){
        dist[i] = INT_MAX;
        color[i] = 'W';
        parent[i] = -1;
    }

    dist[src]= 0;
    parent[src]=-1;
    color[src] = 'G';

    queue<int>Q;
    Q.push(src);
    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        color[u]='B';

        for(auto v : edges[u]){
            if(color[v]=='W'){
                color[v]='G';
                Q.push(v);
                dist[v]=1+dist[u];
                parent[v] = u;
            }
        }
    }
    for(int i = 1; i<=V; i++){
        cout<<"V = "<<i<<", Color = "<<(char)color[i]<<", Dist = "<<dist[i]<<", Parent = "<<parent[i]<<endl;
    }
}

int main(){
    int V,E; cin>>V>>E;
    vector<vector<int>> adjList(V+1, vector<int>());
    for(int i = 1; i<=E; i++){
        int u, v; cin>>u>>v;
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