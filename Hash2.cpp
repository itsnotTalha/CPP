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

    int s = 9, u = 5, n = 3, b = 2, e = 7, a = 1, m = 4;
    unordered_map<char, int> hashMap;

    // Store key-value pairs
    hashMap['s'] = s;
    hashMap['u'] = u;
    hashMap['n'] = n;
    hashMap['b'] = b;
    hashMap['e'] = e;
    hashMap['a'] = a;
    hashMap['m'] = m;
    string str; cin>>str;
    int hashVal = (hashMap[str[2]] * 49 + hashMap[str[1]] * 7 + hashMap[str[0]] * 1);
        cout<<hashVal<<" => "<<hashVal%29<<" -> "<<hashMap[str[2]] * 49<<" | "<<hashMap[str[1]] * 7
        <<" | "<<hashMap[str[0]]<<endl;
    }
}