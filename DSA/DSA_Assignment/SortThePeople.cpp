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

void Merge(vector<pii>&a, int l, int mid, int h){
    int size = (h-l+1);
    vector<pii> tmp(size);
    int i = l, j = mid+1, k = 0;
    while(i<=mid && j<=h){
        if(a[i].ff>=a[j].ff){
            tmp[k].ff = a[i].ff;
            tmp[k].ss = a[i].ss;
            k++; i++;
        }else{
            tmp[k].ff = a[j].ff;
            tmp[k].ss = a[j].ss;
            k++; j++;
        }
    }
    while(i<=mid){
        tmp[k].ff = a[i].ff;
        tmp[k].ss = a[i].ss;
        k++; i++;
    }
    while(j<=h){
        tmp[k].ff = a[j].ff;
        tmp[k].ss = a[j].ss;
        k++; j++;
    }
    for(int v = 0; v< size; v++){
        a[l+v].ff = tmp[v].ff;
        a[l+v].ss = tmp[v].ss;
    }
}

void MSort(vector<pii>&a, int l , int h){
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
    vector<string>names(n);
    vector<int>heights(n);
    ip(names,n);
    ip(heights,n);
    vector<pii>ans;
    for0(i,n){
        ans.pb(MP(heights[i],i));
    }
    MSort(ans,0,n-1);
    vector<string>fnl(n);
    for0(i,n){
        fnl[i]=names[ans[i].ss];
    }
    
    return 0;
}