
// class PrimsAlgo{
//     int Key[100], Parent[100];
//     bool inMST[100];
//     struct Compare
//     {
//         bool operator()(pair<int, int> &a, pair<int,int> &b){
//             return a.first>b.first;
//         }
//     };
    

//     void Prins(vector<vector<pair<int,int>>> & AdjL, int V , int E, int s){
//         for(int i = 1; i<=V; i++){
//             Key[i]= INT_MAX;
//             Parent[i] = -1;
//             inMST[i] = false;
//         }
//         key[s] = 0;

//         priority_queue<pair<int,int>, vector<pair<int,int>>, Compare> pq;
//         pq.push({s,0});

        
//         while(!pq.empty()){
//             pair<int,int> a = pq.top();
//             int u = a.first;
//             pq.pop();
//             if(inMST[u]) continue;
//             inMST[u] = true; 
//             for(auto x : AdjL[u]){
//                 int v = x.first;
//                 int w = x.second;
//                 if(inMST[v]==false and key[v]>w){
//                     key[v] = w;
//                     Parent[v] = u;
//                     pq.push({v,w});
//                 }
//             }
//         }

//     }

//     int main(){
//         cout<<"Enter vertex and edges: ";
//         int V, E; cin>>V>>E;
//         vector<vector<pair<int,int>>> AdjL(V+1);
//         for(int i = 1; i<=V; i++){
//             int s, e, w; cin>>s>>e>>w;
//             AdjL[s].push_back({e,w});
//         }
//         Prims(AdjL, V, E, 1);
//         cout<<"KEYS"<<endl;
//         for(int i = 1; i<=V; i++) cout<<Key[i]<<" ";
//         cout<<endl;
//         for(int i = 1; i<=V; i++) cout<<Parent[i]<<" ";
//     }

// };

// class AnotherPrim{
//   int key[100], Parent[100];
//   bool inMst[100];
  
//   struct Compare{
//     bool operator()(pair<int,int> &a, pair<int,int> &b){
//         return a.first>b.first;
//     }
//   };

//   void Prims(vector<vector<pair<int,int>>> &AdjL, int v, int e, int s){
//     for(int i = 1; i<=v; i++){
//         key[i] = INT_MAX;
//         Parent[i] = -1;
//         inMst[i] = false;
//     }
//     key[s] = 0;
//     priority_queue<pair<int,int>, vector<pair<int,int>>, Compare> pq;
//     pq.push({s,0});
//     while(!pq.empty()){
//         pair<int, int> a = pq.top();
//         int u = a.first;
//         pq.pop();
//         if(inMst[u]) continue;
//         inMST[u] = true;
//         for(auto x : AdjL[u]){
//             int v = x.first;
//             int w = x.second;
//             if(inMST[v]==false and key[v]>w){
//                 key[v] = w;
//                 Parent[v] = u;
//                 pq.push({v,w});
//             }
//         }
//     }
//   }

//   int main(){
//     cout<<"Enter vertices and edges: ";
//     int V, E; cin>>V>>E;
//     vector<vector<pair<int,int>>> AdjL(V+1);
//     for(int i = 1; i<=V; i++){
//         int s, e, w;
//         cin>>s>>e>>w;
//         AdjL[s].push_back({e,w});
//     }
//     Prims(AdjL, V, E, 1);
//   }
// };