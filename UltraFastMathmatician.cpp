#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,result;
    cin >> s1 >> s2;
    for(int i =0; i<s1.size();i++){
        result += ((s1[i]==s2[i])?'0':'1');
    }
    cout << result;
    return 0;
}