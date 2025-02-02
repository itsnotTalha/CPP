#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1="I love", s2 = "I hate", s3=" that ",s4 = " it",output;
    int n;
    cin >> n;
    for(int i=0; i<n;i++){
        if(i<1){
            output+=s2;
        }
        if(i>=1&&i%2!=0){
            output+=s3;
            output+=s1;
        }else if(i>=1&&i%2==0){
            output+=s3;
            output+=s2;
        }
        if(i==n-1){
            output+=s4;
        }
    }
    cout<<output;
    return 0;
}