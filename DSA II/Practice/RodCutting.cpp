#include<bits/stdc++.h>
using namespace std;

int P[100], memo[100], pTable[100];

void initMemo(){
    memo[0] = 0;
    for(int i = 1; i<100; i++) memo[i]=-1;
}
void printMemo(int L){
    cout<<"********************"<<endl;
    for(int i=0; i<=L; i++) cout<<memo[i]<<" ";
    cout<<endl;
    cout<<"********************"<<endl;
}
void printPtable(int L){
    cout<<"********************"<<endl;
    for(int i=0; i<=L; i++) cout<<pTable[i]<<" ";
    cout<<endl;
    cout<<"********************"<<endl;
}

int RodCutting(int L){
    if(L==0) return 0;
    if(memo[L]!=-1) return memo[L];

    int maxVal = INT_MIN;
    int maxCut;
    for(int i = 1; i<=L; i++){
        int val = P[i]+RodCutting(L-i);
        if(val>maxVal){
            maxVal = val;
            maxCut = i;
        }
    }
    memo[L] = maxVal;
    pTable[L] = maxCut;
    return maxVal;
}

int RodCuttingBup(int L){
    for(int i = 1; i<=L; i++){
        int maxVal = INT_MIN;
        int maxCut;

        for(int j = 1; j<=i; j++){
            int val = P[j]+memo[i-j];
            if(val>maxVal){
                maxVal=val;
                maxCut=j;
            }
        }
        memo[i]=maxVal;
        pTable[i] = maxCut;
    }
    return memo[L];
}

int main(){
    int n; 
    cout<<"Enter your Rod Size: ";cin>>n;
    cout<<"\nEnter the prices per lenght: \n";
    for(int i = 1; i<=n; i++) cin>>P[i];
    initMemo();
    printMemo(n);
    cout<<endl;
    int maxVal = RodCuttingBup(n);
    printMemo(n);
    printPtable(n);
    cout<<"Max you can achieve is : "<<maxVal<<endl;
}
/*
4
1 2 8 9

int P[100], pTime[100], memo[100];
void initMemmo(){
    for(int i = 1; i<100; i++) memo[i]=-1;
    memo[0]=0;
}

void printMemo(int L){
cout<<"*************************\n";
    for(int i = 0; i<=L; i++) cout<<memo[i]<<" ";
}
void printPtable(int L){
cout<<"*************************\n";
    for(int i = 0; i<=L; i++) cout<<memo[i]<<" ";
}

int RodCutt(int L){
    if(L==0) return 0;
    if(memo[L]!=-1) return memo[L];

    int maxVal = INT_MIN;
    int maxCut;
    for(int i = 1; i<=L; i++){
        int val = P[i]+RodCutt(L-i);
        if(val>maxVal){
            maxVal = val;
            maxCut = i;
        }
    }
    memo[L] = maxVal;
    Ptable[L] = maxCut;
    return maxVal;
}

int RodCuttingBup(int L){
    if(L==0) return 0;
    if(memo[L]!=-1) return memo[L];

    for(int i = 1; i<=L; i++){
        int maxVal = INT_MIN;
        int maxCut;
        for(int j = 1; j<=i; j++){
            int val = P[j]+memo[i-j];
            maxCut = j;
        }
        memo[i] = maxVal;
        pTable[i] = maxCut;
    }
    return memo[L];
}

int main(){
    int n;
    cout<<"Enter the size :"; cin>>n;
    for(int i = 1; i<=n; i++) cin>>P[i];
    initmem();
    printMemo(n);
    printPtable(n);
    int wanted = RodCutt(n);
    cout<<"Max value would be: "<<wanted<<endl;
}

*/