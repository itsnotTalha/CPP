#include <bits/stdc++.h>
using namespace std;

#define Fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb push_back
#define ppb pop_back
#define MP make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define sz(x) int(x.size())

#define for0(i, n) for (int i = 0; i < int(n); i++)
#define for1(i, n) for (int i = 1; i <= int(n); i++)
#define FOR(i, x, y) for (int i = int(x); i <= int(y); i++)
#define ROF(i, x, y) for (int i = int(x); i >= int(y); i--)

#define si(x) scanf("%d", &x)
#define sii(x, y) scanf("%d %d", &x, &y)
#define siii(x, y, z) scanf("%d %d %d", &x, &y, &z)
#define sl(x) scanf("%lld", &x)
#define sll(x, y) scanf("%lld %lld", &x, &y)
#define slll(x, y, z) scanf("%lld %lld %lld", &x, &y, &z)

#define ip(a, n) for0(i, n) cin >> a[i]

void Merge(vector<pair<int,int>>&a, int l, int mid, int h){
    int size = (h-l+1);
    vector<pair<int, int>> tmp(size);
    int i = l, j = mid+1, k = 0;
    while(i<=mid && j<=h){
        if(a[i]>=a[j]){
            tmp[k].first = a[i].first;
            tmp[k].second = a[i].second;
            k++;
            i++;
        }else{
            tmp[k].first = a[j].first;
            tmp[k].second = a[j].second;
            j++;
            k++;
        }
    }
    while(i<=mid){
        tmp[k].first=a[i].first;
        tmp[k].second=a[i].second;
        k++;
        i++;
    }
    while(j<=h){
        tmp[k].first = a[j].first;
        tmp[k].second = a[j].second;
        k++;
        j++;
    }
    for(int v = 0; v< size; v++){
        a[l+v].first = tmp[v].first;
        a[l+v].second = tmp[v].second;
    }
}

void MSort(vector<pair<int,int>>&a, int l , int h){
    if(l<h){
        int mid = (l+h)/2;
        MSort(a, l, mid);
        MSort(a, mid+1, h);
        Merge(a, l, mid, h);
    }
}

int main() {
    Fast_io;
    int n; cin>>n;
    vi score(n);
    vector<pair<int , int>> tmp(n);
    ip(score,n);
   // int n = score.size();
    for(int i = 0; i<n; i++){
       tmp[i] = make_pair(score[i], i);
    }

    MSort(tmp,0, n-1);
    
    vector<int> rank(n); 

    for (int i = 0; i < n; ++i) {
        rank[tmp[i].second] = i + 1; 
    }

    vector<string> ans;
    

    for (int i = 0; i < n; ++i) {
        if(rank[i]==1){
            ans.push_back("Gold Medal");
        }else if(rank[i]==2){
            ans.push_back("Silver Medal");
        }else if(rank[i]==3){
            ans.push_back("Bronze Medal");
        }else{
            ans.push_back(to_string(rank[i]));
        }
    }
    for(string x : ans){
        cout<<x<<" ";
    }
    return 0;
}