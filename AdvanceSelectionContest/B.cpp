#include<bits/stdc++.h>
using namespace std;
int main(){
   int n; cin>>n;
   int lim = 100;
   int count = 0;
   for(int i = 1; i<=lim; i++){
    count+=n/(pow(5,i));
   }
   cout<<count<<endl;
}