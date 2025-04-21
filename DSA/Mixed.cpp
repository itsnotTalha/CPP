#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int>&a, int l, int mid, int h){
    int size = (h-l+1);
    vector<int> tmp(size);
    int i = l, j = mid+1, k = 0;
    while(i<=mid && j<=h){
        if(a[i]>=a[j]){
            tmp[k++] = a[i++];
        }else{
            tmp[k++] = a[j++];
        }
    }
    while(i<=mid){
        tmp[k++]=a[i++];
    }
    while(j<=h){
        tmp[k++] = a[j++];
    }
    for(int v = 0; v< size; v++){
        a[l+v] = tmp[v];
    }
}

void MSort(vector<int>&a, int l , int h){
    if(l<h){
        int mid = (l+h)/2;
        MSort(a, l, mid);
        MSort(a, mid+1, h);
        Merge(a, l, mid, h);
    }
}

void display(vector<int>A){
    for(int x : A){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> a = {1, 5,3,2,6,7};
    MSort(a, 0, 6);
    display(a);
}