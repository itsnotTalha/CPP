#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p[n];
    for( int i=0; i<n;i++){
        cin>>p[i];
    }
    for ( int j = 1; j <= n; j++ ){
        for ( int i = 0; i < n; i++ ){
            if ( p[i] == j ){
                cout<<i+1<<" ";
                break;
            }
        }
    }
    return 0;
}