#include<bits/stdc++.h>
using namespace std;

int P[100],memo[100][100], pTable[100][100];

void initMemo(){
    for(int i = 0; i<100; i++)
    for(int j = 0; j<100; j++){
        if(i==0) memo[i][j]=0;
        else if(j==0) memo[i][j] = INT_MAX;
        else memo[i][j]=-1;
    }
}
void printMemo(int M, int N){
    cout<<"***********************\n";
    for(int i = 1; i<=M; i++){
        for(int j = 1; j<=N; j++) cout<<memo[i][j]<<"\t";
        cout<<endl;
    }
}
int CoinChange(int M, int N){
    if(M<0) return  INT_MAX;
    if(M>0 and N==0) return INT_MAX;
    if(memo[M][N]!=-1) return memo[M][N];
    if(M==0) return 0;

    int taken, notTaken;
    notTaken = 0 + CoinChange(M,N-1);
    int retVal = CoinChange(M-P[N], N-1);
    taken = (retVal==INT_MAX)? INT_MAX : 1+retVal;
    
    if(notTaken<=taken){
        memo[M][N] = notTaken;
        pTable[M][N] = 'N';
        return notTaken;
    }else{
        memo[M][N] = taken;
        pTable[M][N] = 'T';
        return taken;
    }
    return memo[M][N];
}

void bottomUp(int M, int N){
    for(int i = 1; i<=M; i++)
    for(int j = 1; j<=N; j++)
    CoinChange(i,j);
}

void printAns(int M, int N){
    int cap = M;
    cout<<"Coin Needed : "<<memo[M][N]<<endl;
    while(cap>0 and N>0){
        if(pTable[cap][N]=='T'){
            cout<<"Coin "<<N<<" is taken! Value: "<<P[N]<<endl;
            cap-=P[N];
        }
        N--;
    }
}

void coinTaken(int M, int N){
    if(M==0 or N==0) return;

    if(pTable[M][N]=='T'){
        cout<<"Coin "<<N<<" is taken! Value: "<<P[N]<<endl;
        coinTaken(M-P[N], N-1);
    }else{
        coinTaken(M, N-1);
    }

}

int main(){
    int M,N; cin>>M>>N;
    for(int i = 1; i<=N; i++) cin>>P[i];

    initMemo();
    printMemo(M,N);
    bottomUp(M,N);
    printMemo(M,N);
    coinTaken(M,N);
}

class CoinChange{
public:
    int P[100], memo[100][100], pTable[100][100];
    
    void initMemo(){
        for(int i = 0; i<100; i++)
        for(int j = 0; j<100; j++){
            if(i==0) memo[i][j] = 0;
            else if(j==0) memo[i][j] = INT_MAX;
            else memo[i][j];
        }
    }
    void printMemo(int M, int N){
        for(int i = 1; i<=M; i++){
        for(int j = 1; j<=N; j++)
           cout<<memo[i][j]<<' ';
        cout<<endl;
        }
    }

    int coinChng(int M, int N){
        if(M<0) return INT_MAX;
        if(M>0 and N==0) return INT_MAX;
        if(M==0) return 0;
        if(memo[M][N]!=-1) return memo[M][N];

        int taken, notTaken;
        notTaken = 0 + coinChng(M, N-1);
        int retVal = coinChng(M-P[N], N-1);
        taken = retVal==INT_MAX ? INT_MAX : 1 + retVal;

        if(notTaken<=taken){
            memo[M][N] = notTaken;
            pTable[M][N] = 'N';
            return notTaken;
        }else{
            memo[M][N] = taken;
            pTable[M][N] = 'T';
            return taken;
        }
    }

    void bottomUp(int M, int N){
        for(auto i = 1; i<=M; i++){
            for(auto j = 1; j<=N; j++)
            coinChng(i,j);
        }
    }

    void PrintAns(int M, int N){
        cout<<"Coin Needed : "<<memo[M][N];
        while(M>0 and N>0){
            if(pTable[M][N]=='T'){
                cout<<"Coin "<<N<<" is taken! Value: "<<P[N]<<endl;
                M-=P[N];
            }
            N--;
        }
    }
    void PrintAss(int M, int N){
        if(M==0 or N==0) return;

        if(pTable[M][N] == 'T'){
           cout<<"Coin "<<N<<" is taken! Value: "<<P[N]<<endl;
            PrintAss(M-P[N], N-1);
        }else{
            PrintAss(M, N-1);
        }
    }
};