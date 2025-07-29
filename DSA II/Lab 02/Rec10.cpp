#include<bits/stdc++.h>
using namespace std;

pair<int,int> findmxmin(vector<int> &a, int st, int ed){
    if(st==ed){
        int mx = a[st];
        int mn = a[st];
        return make_pair(mx,mn);
    }
    pair<int,int> p1 = findmxmin(a, st, (st+ed)/2);
    pair<int,int> p2 = findmxmin(a, ((st+ed)/2)+1, ed);
    return make_pair(p1.first>=p2.first?p1.first:p2.first, p1.second<=p2.second?p1.second:p2.second);
}
int main(){
    vector<int>A = {1,3,5,99,4,3,6,7};
    pair<int,int> p1 = findmxmin(A, 0, A.size()-1);
    cout<<p1.first<<" "<<p1.second<<endl;
}
