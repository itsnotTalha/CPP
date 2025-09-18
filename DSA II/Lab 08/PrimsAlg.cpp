#include<bits/stdc++.h>
using namespace std;


/*
a -> b|2 -> d|2 -> c|1 -> NULL
b -> a|2 -> d|6 -> c|4 -> NULL
c -> a|1 -> d|10 -> c|1 -> NULL
d -> c|10 -> a|2 -> b|6 -> e|6 -> NULL
e -> b|4 -> d|6 -> c|1 -> NULL

priority queue is needed -.-

Properties: 
key = u
parent = V
inMinST = False

while(){
is neighbor?
outside MST?
key larger?
if yes:
key[v] = wt
pq.insert(key[v],v)
parent[v]=u

}
*/

class AdjList{
public:
int vertex, weight;
AdjList(int vertex, int weight){
    this->vertex = vertex;
    this->weight = weight;
}
};

int key[100], parent[100];
bool inMST[100];

struct Compare{
    bool operator()(pair<int,int> &a, pair<int,int>&b){
        return a.first>b.first;
    }
};

void Prims(vector<vector<pair<int,int>>>  &adjL, int V, int E, int s){
    for(int i = 1; i<=V; i++){
        key[i] = INT_MAX;
        parent[i] = -1;
        inMST[i] = 0;
    }

    key[s] = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, Compare> pq;

    pq.push({s,0});

    while(!pq.empty()){
        pair<int,int> a = pq.top();
        cout<<a.first<<" "<<a.second<<endl;
        pq.pop();
        int u = a.first;
        if(inMST[u]) continue;

        inMST[u]=true;

        for(auto x : adjL[u]){
            int v = x.first;
            int w = x.second;
            if(inMST[v]==false and key[v]>w){
                key[v] = w;
                parent[v] = u;
                pq.push({v,key[v]});
            }
        }

    }
    cout<<"KEYSSS: ";
    int sum = 0;
    for(int i = 1; i<=V; i++){
        sum+=key[i];
        cout<<key[i]<<" ";
    } 
    cout<<endl;
    cout<<"PARENTT: ";
    for(int i = 1; i<=V; i++) cout<<parent[i]<<" ";
    cout<<endl;
    cout<<"inMST: ";
    for(int i = 1; i<=V; i++) cout<<inMST[i]<<" ";
    cout<<endl;
    cout<<"Total weight : "<<sum<<endl;
    /*
        selected edges ber korte hobe
        1, 2, 4
        8, 2, 5
        2, 3, 9
        ...
    */
}

int main(){
    cout<<"Enter the number of vertices and edges "<<endl;
    int V, E;
    cin>>V>>E;

    vector<vector<pair<int,int>>>  adjL(V+1);

    cout<<"Enter the edges: "<<endl;
    for(int i = 1; i<=E; i++){
        //s is start, e is end and w is weight of the edge
        int s, e, w; cin>>s>>e>>w;
        adjL[s].push_back({e,w});
    }
    int i = 0;
    for(auto x : adjL){
        cout<<i<<" -> ";
        for(auto s : x){
            cout<<s.first<<"|"<<s.second<<" -> ";
        }
        cout<<"NULL"<<endl;
        i++;
    }
    Prims(adjL, V, E, 1);
}

/*
8 10
1 2 4
1 8 6
2 3 9
2 8 5
2 5 2
5 4 15
5 6 8
6 7 3
7 8 14
6 8 10
*/