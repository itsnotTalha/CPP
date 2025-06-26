#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> prices={8,4,6,2,3};
    for(int i = 0; i<prices.size(); i++){
        for(int j = i+1; j<prices.size(); j++){
            if(prices[j]<=prices[i]){
                prices[i]-=prices[j];
                break;
            }
        }
    }
    for(int x : prices) cout<<x<<" ";
}