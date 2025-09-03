#include<bits/stdc++.h>
using namespace std;

int P[100]; int W[100];
int memo[100][100];
int pTable[100][100];

void initMem(int n, int m){
    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=m; j++){
            if(i==0 or j==0) memo[i][j]=0;
            else memo[i][j] = -1;
        }
    }
}
void printMem(int n, int m){
    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=m; j++){
           cout<<memo[i][j]<<' ';
        }
        cout<<endl;
    }
}

int knapsack(int c, int i){
    if(c==0 or i==0) return 0;
    if(memo[c][i]!=-1) return memo[c][i];
    int taken, notTaken;
    notTaken = 0+knapsack(c, i-1);

    if(c>=W[i]){
        taken = P[i]+knapsack(c-W[i], i-1);
    }else{
        taken = 0;
    }

    if(taken>notTaken){
        pTable[c][i] = 1;
        memo[c][i] = taken;
        return taken;
    }else{
        pTable[c][i] = 0;
        memo[c][i] = notTaken;
        return notTaken;
    }
}

void bottomUp(int c, int i){
    for(int i = 1; i<=c; i++)
    for(int j = 1; j<=i; j++)
    knapsack(i,j);
}

void printItems(int c, int i){
    if(c==0 or i==0) return;
    if(pTable[c][i]){
        cout<<"Item "<<i<<" is taken\n";
        printItems(c-W[i], i-1);
    }else{
        printItems(c, i-1);
    }
}

int main(){
    int n, C;
    cin>>C>>n;
    initMem(n,C);
    for(int i = 1; i<=n; i++) cin>>P[i];
    for(int i = 1; i<=n; i++) cin>>W[i];

    cout<<"You Entered -\n";
    for(int i = 1; i<=n; i++){
        cout<<P[i]<<' '<<W[i]<<endl;
    }
    bottomUp(C,n);
    printMem(C,n);
    printItems(C,n);
    
}
/*
5 4
3 4 5 6
2 3 4 5
*/