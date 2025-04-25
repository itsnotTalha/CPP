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
#define FOR(i, x, y) for (int i = int(x); i <= int(y); i++)
#define ROF(i, x, y) for (int i = int(x); i >= int(y); i--)



 
#define si(x) scanf("%d", &x)
#define sii(x, y) scanf("%d %d", &x, &y)
#define siii(x, y, z) scanf("%d %d %d", &x, &y, &z)
#define sl(x) scanf("%lld", &x)
#define sll(x, y) scanf("%lld %lld", &x, &y)
#define slll(x, y, z) scanf("%lld %lld %lld", &x, &y, &z)

const ll M = 100001;
bool primes[M + 1];

void printArray(int N)
{
    if (N == 2) {
        cout << -1 << endl;
        return;
    }
 
    for (int i = 0; i < M; i++)
        primes[i] = 1;
    primes[0] = 0;
    primes[1] = 0;
 
    for (int i = 2; i * i <= M; i++) {
        if (primes[i] == 1) {
            for (int j = i * i; j <= M;
                 j += i) {
                primes[j] = 0;
            }
        }
    }
 
    vector<int> v;
    for (int i = 0; i < M; i++) {
        if (v.size() < N
            && primes[i] == 1) {
            v.push_back(i);
        }
    }
 
    int product = 1;
    vector<int> answer;
 
    for (auto it : v) {
        product *= it;
    }
 
    for (int i = 0; i < N; i++) {
        int num = product / v[i];
        answer.push_back(num);
    }
 
    for (int i = 0; i < N; i++) {
        cout << answer[i] << " ";
    }
}

bool isPrime(int n){
    int cnt = 0;
    if (n <= 1)
    return true;
else {

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            cnt++;
    }
    if (cnt > 0)
        return false;
    else
        return true;
  }
}


int main() {
    Fast_io;
    int n,m,k; cin>>n>>m>>k;
    n++;
    vi v(k);
    ll target = n * (pow(m,3));
    ll sum = 0;
    for0(i,k){
        cin>>v[i];
        sum += pow(v[i], 3);
    }   
    if(sum>=target){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
