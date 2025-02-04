#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,6,8,12,20};
    int n,sum=0;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s=="Tetrahedron"){
            sum+=arr[0];
        }else if(s=="Cube"){
            sum+=arr[1];
        }else if(s=="Octahedron"){
            sum+=arr[2];
        }else if(s=="Dodecahedron"){
            sum+=arr[3];
        }else if(s=="Icosahedron"){
            sum+=arr[4];
        }
    }
    cout << sum;
    return 0;
}