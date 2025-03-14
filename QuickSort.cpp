#include<bits/stdc++.h>
using namespace std;
int a[]={1,4,2,6,7,11,44,66};
int Partition(int l,int h){
    int pivot = a[l];
    int i=l,j=h;
    while(i<j){
        do{
            i++;
        }while(a[i]<=pivot);
        do{
            j--;
        }while(a[j]>pivot);
        if(i<j)
        swap(a[i],a[j]);
    }
    swap(a[l],a[j]);
    return j;
}
void QuickS(int l,int h){
    if(l<h){
        int j = Partition(l,h);
        QuickS(l,j);
        QuickS(j+1,h);
    }
}
int main(){
    int n=8;
    QuickS(0,n-1);
    for(int x:a){
        cout<<x<<" ";
    }
}