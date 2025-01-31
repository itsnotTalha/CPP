#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int upCount=0,lowcount=0;
    for(int i =0; i<s.size(); i++){
        if(islower(s[i])){
            lowcount++;
        }else{
            upCount++;
        }
    }
    if(upCount>lowcount){
        transform(s.begin(), s.end(), s.begin(), ::toupper); 
    }else{
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
    }
        cout << s;
    return 0;
}