#include<bits/stdc++.h>
using namespace std;
int main(){
    while(true)
    {
    // int n, m;
    // cin>>n;
    // // cout<<n%m<<endl;
    // cout<<"Hash 1: ";
    // cout<<(n)%11<<endl;
    // //cout<<"Hash 2: "<<(3*n %13)+1<<endl;

    int s = 2, u = 3, n = 5, b = 7, e = 11, a = 1, m = 4;
    unordered_map<char, int> hashMap;

    // Store key-value pairs
    hashMap['a'] = s;
    hashMap['b'] = u;
    hashMap['c'] = n;
    hashMap['d'] = b;
    hashMap['f'] = e;

    string str; cin>>str;
    int hashVal = ((hashMap[str[2]] * 36) + (hashMap[str[1]] * 6) + (hashMap[str[0]] * 1));
        cout<<hashVal
        //<<" => "<<hashVal
        <<" -> "<<hashVal%131
        <<" -> "<<hashVal-hashMap[str[0]]
        <<endl;
    }
}