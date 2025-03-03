#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> res(n);
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j =0;j<4;j++){
            int x;
            cin>>x;
            sum+=x;
        }
        res[i]={(i+1),sum};
    }
    for (int i = 1; i < n; i++) {
        pair<int, int> t = res[i];
        int j = i - 1;

        while (j >= 0 && res[j].second < t.second) {
            res[j + 1] = res[j];
            j--;
        }
        res[j + 1] = t;  
    }
    for(int i=0;i<n;i++){
        if(res[i].first==1){
            cout<<i+1;
            break;
        }
    }
    return 0;
}