#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int aCount=0,bCount=0;
        for(int i=0;i<5;i++){
            if(s[i]=='A'){
                aCount++;
            }else{
                bCount++;
            }
        }

        //BLAH BLAH
        cout<<(aCount>bCount?"A":"B")<<endl;
    }
}