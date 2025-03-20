#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<char> stck;
    string paren;
    cin>>paren;

    for(char c:paren){
        if(c=='(' || c=='{' || c=='['){
            stck.push_back(c);
        }
        else{
            char last = stck.back();
            if((last=='(' && c==')') || (last=='{' && c=='}') || (last=='[' && c==']')){
                stck.pop_back();
            }
            else{
                cout<<"Invalid Sequence"<<endl;
                break;
            }
        }

    }
    if(stck.empty())
        cout<<"Valid Sequence"<<endl;
    return 0;
}
