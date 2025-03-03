#include <bits/stdc++.h>
using namespace std;
#define for0(i, n) for (int i = 0; i < (int)(n); ++i)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        int count = 0, adCnt = 0, wTime = 0;
        
        for0(i, n){
            cin >> a[i];
        }
        
        sort(a.rbegin(), a.rend());
    
        for0(i, n){
            if(i%2==1&&i<n/2){
                int tmp = a[i];
                a[i]=a[n-i];
                a[n-i]=tmp;
            }
            wTime += a[i];
            count++;
            
            if ((count == 3 || wTime >= k) && i < n - 1) {
                adCnt++;
                count = 0;
                wTime = 0;
            }
        }
        
        cout << adCnt << endl;
    }
    return 0;
}
