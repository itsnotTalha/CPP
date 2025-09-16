#include<bits/stdc++.h>
using namespace std;

int P[100];
void printArr(int n){
    for(auto i = 1; i<=n; i++)
    cout<<P[i]<<' ';
    cout<<endl;
}

int countPrime(int A[], int l, int r){
    if(l==r) return P[A[l]];
    int mid = (l+r)/2;
    int left = countPrime(A, l, mid);
    int right = countPrime(A,mid+1,r);
    return left+right;
}

void SieveCalc(int n){
    P[0]=P[1]=0;
    for(auto i = 2; i<=n; i++) P[i]=1;
    int lastNum = sqrt(n)+1;
    for(auto i = 2; i<=lastNum; i++){
        for(auto j = i+1; j<=n; j++){
            if(j%i==0) P[j] = 0;
        }
    }
}

int main(){
    int A[] = {1, 3, 5, 6, 4, 7, 3, 7, 99, 2, 1, 6};
    int n; cin>>n;
    SieveCalc(n);
    printArr(n);
    cout<<endl;
    cout<<countPrime(A, 0, 11);
}