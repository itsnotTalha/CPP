/*
    The first line contains an integer 
    5 Bundles
    Need to find minimum cost for each bundles from each restaurant.

*/

#include <bits/stdc++.h>
using namespace std;

#define Fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

typedef long long ll;
typedef vector<int> vi;
typedef deque<int> di;
typedef pair<int, int> pii;

#define pb push_back
#define ppb pop_back
#define MP make_pair
#define ff first
#define ss second
#define pf push_front
#define ppf pop_front
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

void solve1(){
    int N; cin>>N;
    vector<vector<int>> bundle(5, vector<int>(4));
    for0(i,5){
        for0(j,4){
            int t; cin>>t;
            bundle[i][j] = t;
        }
    }

    vi time(N);
    vector<vector<int>> price(N, vector<int>(21));
    for0(x,N){
        cin>>time[x];
        for1(i, 20){
            int t; cin>>t;
            price[x][i]= t;
        }
    }
    vector<ll> sum(5,LONG_LONG_MAX);
    int max_time = INT_MIN;
    for0(l, N){
        for(int i = 0; i<5; i++){
            ll temp_sum = 0;
            // cout<<"Store:"<<l<<' '<<"Bundle : "<<i<<' ';
            for(auto &j : bundle[i]){
                temp_sum += price[l][j];
                // cout<<price[l][j]<<' ';
            }
            if(temp_sum<=sum[i]) {
                sum[i] = temp_sum;
                if(time[l]>max_time) max_time = time[i];
            }
            // cout<<temp_sum<<" time:"<<time[l]<<endl;
        }
        // cout<<endl;
    }
    ll final_sum = 0;
    for(auto &i : sum)final_sum+=i;
    cout<<final_sum+max_time<<endl;
}

void solve(){
    int N; cin>>N;
    vector<vector<int>> bundle(5, vector<int>(4));
    for0(i,5){
        for0(j,4){
            int t; cin>>t;
            bundle[i][j] = t;
        }
    }

    vi time(N);
    vector<vector<int>> price(N, vector<int>(21));
    for0(x,N){
        cin>>time[x];
        for1(i, 20){
            int t; cin>>t;
            price[x][i]= t;
        }
    }
    vector<ll> sum(5,LONG_LONG_MAX);
    ll t1 = LONG_LONG_MIN;
    ll b1 = 0;
    for0(j, 5)
    for(int i = 0; i<N; i++){
        ll temp = 0;
        for(auto &b : bundle[i]){
            temp+=price[i][b];
            cout<<price[i][b]<<' ';
        }
        if(temp<=sum[j]){
            sum[j] = temp;
            if(time[i]>=t1) t1 = time[i];
        } 
        cout<<temp<<" "<<j<<" "<<i<<' '<<endl;
        temp = 0;
    }
    for(auto &i : sum){
        b1+=i;
    }
    cout<<b1+t1<<endl;
    // for(int i = 0; i<5; i++){
    //     ll b1 = 0;
    //     for(auto &b : bundle){
    //         for(auto &ind : b){
    //             // cout<<price[i][ind - 1]<<" ";
    //             b1+=price[0][ind - 1];
    //         }
    //         b1 = 0;
    //     }
    // }
}

int main() {
    Fast_io;
    int t; cin>>t;
    while(t--){
        solve1();
    }   
    return 0;
}
/*
1
3
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
17 18 19 20
20
5  5  5  5 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
15
20 20 20 20 10 10 10 10 20 20 20 20 20 20 20 20 20 20 20 20
25
20 20 20 20  50  50  50  50  5  5  5  5  5  5  5  5  5  5  5  5
*/