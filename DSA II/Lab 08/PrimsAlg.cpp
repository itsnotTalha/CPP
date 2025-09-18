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