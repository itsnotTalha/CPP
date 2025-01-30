#include<bits/stdc++.h>
using namespace std;
void strCmp(string s1, string s2);
int main(){
    string str1 , str2;
    cin >> str1 >> str2;
    strCmp(str1, str2);
    return 0;
}
void strCmp(string s1, string s2){
    int temp=0;
    for(int i =0; i<s1.size();i++){
        if(tolower(s1[i]) < tolower(s2[i])){
            temp = -1;
            break;
        }else if(tolower(s1[i]) > tolower(s2[i])){
            temp=1;
            break;
        }
    }
    cout<<temp;
}