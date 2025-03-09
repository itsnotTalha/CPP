#include<bits/stdc++.h>
using namespace std;
struct Practice
{
    int id;
    long long int price;
};
int binaryS(Practice a[],int size, int target){
    int l=0, h=size-1;
    while(l<h){
        int mid = (l+h)/2;
        if(target==a[mid].id) return a[mid].price;
        else if(target<a[mid].id) h = mid-1;
        else l = mid + 1;
    }
    return -1;
}
int main(){
    Practice p[5];
    for(int i=0;i<5;i++){
        p[i].id=i;
        p[i].price=i*1000+1000;
    }
    cout<<binaryS(p,5,3)<<endl;
    return 0;
}