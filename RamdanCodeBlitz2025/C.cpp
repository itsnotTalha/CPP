#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int maxsum=0, minsum=0;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            maxsum+=x;
            minsum+=x-1;
        }
        if (minsum<100 && maxsum >= 100 ) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}