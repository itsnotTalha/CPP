#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin >> N;  
        vector<int> B(N);
        
        for (int i = 0; i < N; ++i) {
            cin >> B[i];
        }
        
        int sum = accumulate(B.begin(), B.end(), 0);
        
        if (sum == 100) {
            cout << "YES" << endl;
        } else if (sum < 100) {
            cout << "NO" << endl;
        } else {
            int sumin = sum-N;           
            if (sumin <= 100) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}