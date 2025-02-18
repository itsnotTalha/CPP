#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count =1, m=1,tmp=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>tmp){
            count++;
            m = max(m,count);
        }else{
            count = 1;
        }
        tmp=a[i];
    }
    cout<<m<<endl;
    return 0;
}