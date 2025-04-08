#include<iostream>
#include<vector>
using namespace std;
struct fashion
{
    string name;
    double cgpa;
};
bool sub(string s){
    int size = s.size();
    for(int i=0;i<size;i++){
        if(s[i]=='m')
        return true;
    }
    return false;
}
int main(){
    int size;
    cin>>size;
    vector<fashion> f(size);
    for(int i=0;i<size;i++){
        string s;
        double a;
        cin>>s>>a;
        f[i].name=s;
        f[i].cgpa=a;
    }
    for(int i=0;i<size;i++){
        if(sub(f[i].name)&&f[i].cgpa>=3.3){
            cout<<f[i].name;
        }
    }
    return 0;
}