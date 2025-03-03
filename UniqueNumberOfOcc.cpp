#include<bits/stdc++.h>
using namespace std;
#define for0(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
   vector<int>a={1,2};
   unordered_map<int,int>freq;
   unordered_map<int,int>freq2;
   for(int i=0;i<a.size();i++){
    freq[a[i]]++;
   }
   for (auto &[key, value] : freq){
     freq2[value]++;
     //cout<<" K "<<key<<" V "<<value<<" \n";
    }
       bool ans = true;
    for (auto &[key, value] : freq2){
       // cout<<" K "<<key<<" V "<<value<<" \n";
        if(value>1){
            ans=false;
            break;
        }
    }
    cout<<ans<<" \n";
    return 0;
}
