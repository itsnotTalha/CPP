#include<iostream>
#include <vector>
using namespace std;
void bubble_sort(vector<int>&a,int n){
    int flag = 0;
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            cnt++;
            if(a[j]>a[j+1]){
                flag = 1;
                swap(a[j],a[j+1]);
            }
        }
        if(!flag)break;
    }
    cout<<"________"<<cnt<<"_______\n";
}
int main(){
    int n=8;
    vector<int>a={2 ,3 ,5, 7, 9, 10, 13 ,17 };
    bubble_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}