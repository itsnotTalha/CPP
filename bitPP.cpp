#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x=0;
    cin>>n;
    while(n--){
        string str;
        short c=0;
        cin >> str;
        for(int i=0; i<str.size();i++){
            if(str[i]=='+'){
                c++;
            }else if(str[i]=='-'){
                c--;
            }else if(c>=2||c<=-2){
                break;
            }
            else{
                c=0;
            }
        }
        if(c==2){
            x++;
        }else if(c==-2){
            x--;
        }
    }
    cout << x;
}