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

#define for0(i, n) for (int i = 0; i < int(n); i++)
#define for1(i, n) for (int i = 1; i <= int(n); i++)

#define ip(a, n) for0(i, n) cin >> a[i]

vector<int>m;

int main() {
    Fast_io;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int sum = 0, step = 1;
        while(sum+step<=n){
            sum+=step;
            step++;
        }
        cout<<step-1<<endl;
    }
    return 0;
}