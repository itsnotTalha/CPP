#include<bits/stdc++.h>
using namespace std;

bool isPresentInsideString(string s, char c){
    for(int i = 0; i<s.size(); i++){
        if(tolower(s[i])==tolower(c)) return true;
    }
}

int countNameCharactrs(string n, string s, int i, int j){
    if(i==j){
        if(isPresentInsideString(n, s[i])){
                char tmp = tolower(s[i]);
            cout<<"Found the char "<<tmp<<" from your name"<<endl;
            return 1;
        }else{
            return 0;
        }
    }
    int mid = (i+j)/2;
    int left = countNameCharactrs(n,s,i,mid);
    int right = countNameCharactrs(n,s,mid+1,j);
    return left+right;
}

int main(){
    cout<<"Enter your Name"<<endl;
    string n; cin>>n;
    cout<<"Enter any string"<<endl;
    string s; cin>>s;
    cout<<"You entered\nName: "<<n<<"\nString: "<<s<<endl;
    int ans = countNameCharactrs(n,s,0,s.size()-1);
    cout<<"The number of characters in the entered string, which are also present in your name is "<<ans<<endl;
}

/*
Aadeeb
XYZAYYEccDwwd
*/
