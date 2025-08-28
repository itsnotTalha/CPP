#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define int long long
#define for0(i,j) for(auto i = 0; i<j; i++)
#define for1(i,j) for(auto i=1;i<=j;i++)
#define sortall(x) sort(all(x))
#define cpin(x,i) for0(j,i)cin>>x[j]
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define nl cout<<"\n"
bool isPrime(int n){
    if(n<2) return false;
    for(int i = 2; i*i<=n; i++) if(n%i==0) return false;
    return true;
}

vector<bool>isprime(10e5, true);

void solved(){
  int n,m; cin>>n>>m;

  unordered_map<int,int>a,b;
  for0(i,n){
    int x; cin>>x;
    a[x]++;
  }
   for0(i,m){
    int x; cin>>x;
    b[x]++;
  }
  int maxx = INT_MAX;

  for(auto x : a){
    for(auto y : b){
        if(isprime[x.first] and isprime[y.first]){}
        else{
            int sum = abs(x.first-y.first);
            if(sum>10e3)if(isPrime(sum)){
                maxx = min(maxx,sum);
            }else{
                if(isprime[sum]) maxx = min(maxx, sum);
            }
        }
    }
  }

  if(maxx==INT_MAX) cout<<-1;
  else cout<<maxx;
}

signed main(){
    fastio;
    isprime[0]=isprime[1]=false;
    for(int i = 2; i*i<=10e3; i++){
        if(isprime[i]){
            for(int j = i*i; j<=10e3; j+=i) isprime[j] = false;
        }
    }
    //  int t; cin>>t;
    //  while(t--)
    solved();
    return 0;
}