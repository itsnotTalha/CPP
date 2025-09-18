#include<bits/stdc++.h>
using namespace std;

int P[100], memo[100][100], pTable[100][100];

void initMemo(int M, int N){
    for(int i = 0; i<=M; i++)
    for(int j = 0; j<=N; j++){
        if(i==0) memo[i][j] = 0;
        else if (j==0) memo[i][j] = INT_MIN;
        else memo[i][j] =-1;
    }
}

void printMemo(int M, int N){
    cout<<"**********MEMOOO*********"<<endl;
    for(int i = 0; i<=M; i++){
        for(int j = 0; j<=N; j++)
            cout<<memo[i][j]<<"\t";
        cout<<endl;
    }
    cout<<"**********MEMOOO*********"<<endl;
}



int maxNumberOfCoins(int M, int N){
    if(M<0) return INT_MIN;
    if(M>0 and N==0) return INT_MIN;
    if(M==0) return 0;
    if(memo[M][N]!=-1) return memo[M][N];

    int taken, notTaken;
    notTaken = maxNumberOfCoins(M, N-1);
    int retVal = maxNumberOfCoins(M-P[N], N-1);
    taken = (retVal==INT_MIN) ? INT_MIN : 1 + retVal;
    if(notTaken>=taken){
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
    for(int i = 1; i<=M; i++)
    for(int j = 1; j<=N; j++){
        maxNumberOfCoins(i,j);
    }
}

void printCoins(int M, int N){
    if(M==0 or N==0) return;
    if(pTable[M][N]=='T'){
        cout<<"Coin number "<<N<<" (Tk"<<P[N]<<") was taken"<<endl;
        printCoins(M-P[N], N-1);
    }else{
        printCoins(M, N-1);
    }
}
int main(){
    cout<<"Enter the bill"<<endl;
    int M; cin>>M;
    cout<<"Enter the number of coins"<<endl;
    int N; cin>>N;
    for(int i = 1; i<=N; i++) cin>>P[i];

    initMemo(M,N);
    bottomUp(M,N);
    int ans = memo[M][N];
    if(ans==INT_MIN){
         cout<<"Payment not possible with the coins you have\n";
    }else{
        cout<<"Number of coins required to make the payment "<<ans<<endl;
    }
    printMemo(M,N);
    printCoins(M,N);
}
/*
8
8
4 5 6 1 2 3 8 7

4
3
1 2 5
*/
