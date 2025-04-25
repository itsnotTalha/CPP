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


int main() {
    Fast_io;
    int t; cin>>t;
    while(t--){
        int x, y; cin>>x>>y;
        int count = 0;
        if(x==1&&y==1){
            cout<<2<<endl;
            cout<<"3 2"<<endl; 
            cout<<"2 3"<<endl; 
            //cout<<2<<" "<<3<<endl;
            //cout<<3<<" "<<2<<endl;
        }else if(x==1 && y == 2){
            cout<<2<<endl;
            cout<<3<<" "<<1<<endl;
            cout<<3<<" "<<3<<endl;
        }else if(x==1 && y == 3){
            cout<<2<<endl;
            cout<<"3 2"<<endl; 
            cout<<"2 1"<<endl; 
            //cout<<3<<" "<<2<<endl; 
            //cout<<2<<" "<<1<<endl;
        }else if(x==2 && y == 1){
            cout<<2<<endl;
            cout<<1<<" "<<3<<endl;
            cout<<3<<" "<<3<<endl;
        }else if(x==2 && y == 2){
            cout<<0<<endl;
        }else if(x==2 && y == 3){
            cout<<2<<endl;
            cout<<1<<" "<<1<<endl;
            cout<<3<<" "<<1<<endl;
        }else if(x==3 && y == 1){
            cout<<2<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<2<<" "<<3<<endl;
        }else if(x==3 && y == 2){
            cout<<2<<endl;
            cout<<1<<" "<<1<<endl;
            cout<<1<<" "<<3<<endl;
        }else if(x==3 && y == 3){
            cout<<2<<endl;
            cout<<"1 2"<<endl; 
            cout<<"2 1"<<endl; 
            //cout<<1<<" "<<2<<endl;
            //cout<<2<<" "<<1<<endl;
        }
    }
}
