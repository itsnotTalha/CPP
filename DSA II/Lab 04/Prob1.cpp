#include<bits/stdc++.h>
using namespace std;
string modding(string s)
{
    if(s.size()==1)
    {
        string tmp = s;
        if((tmp[0]>='a' && tmp[0]<='z' )||( tmp[0] >='A' && tmp[0]<='Z')) {}
        else if(tmp[0]=='0') tmp = "0zero";
        else if(tmp[0]=='1') tmp = "1one";
        else if(tmp[0]=='2') tmp = "2two";
        else if(tmp[0]=='3') tmp = "3three";
        else if(tmp[0]=='4') tmp = "4four";
        else if(tmp[0]=='5') tmp = "5five";
        else if(tmp[0]=='6') tmp = "6six";
        else if(tmp[0]=='7') tmp = "7seven";
        else if(tmp[0]=='8') tmp = "8eight";
        else if(tmp[0]=='9') tmp = "9nine";
        else tmp ="";
        return tmp;
    }
    string tmp = s.substr(0,1);
    if((tmp[0]>='a' and tmp[0]<='z' ) or ( tmp[0] >='A'  and tmp[0]<='Z')) {}
    else if(tmp[0]=='0') tmp = "0zero";
    else if(tmp[0]=='1') tmp = "1one";
    else if(tmp[0]=='2') tmp = "2two";
    else if(tmp[0]=='3') tmp = "3three";
    else if(tmp[0]=='4') tmp = "4four";
    else if(tmp[0]=='5') tmp = "5five";
    else if(tmp[0]=='6') tmp = "6six";
    else if(tmp[0]=='7') tmp = "7seven";
    else if(tmp[0]=='8') tmp = "8eight";
    else if(tmp[0]=='9') tmp = "9nine";
    else tmp ="";
    return tmp+=modding(s.substr(1));
}
int main()
{
    string s ;
    cin>>s;
    //string s2 = "###1a1???";
    //cout<<s.substr(1);

    cout<<modding(s)<<endl;
    //cout<<modding(s2)<<endl;
}
