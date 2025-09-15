#include<bits/stdc++.h>
using namespace std;

int P[100], W[100], memo[100][100], pTable[100][100];

void initMemo(){
    for(int r = 0; r<100; r++){
        for(int c = 0; c<100; c++){
            if(r==0 or c==0) memo[r][c] = 0;
            else memo[r][c]=-1;
        }
    }
}

void printMemo(int r, int c){
    cout<<"******MEMO*******"<<endl;
    for(int i = 0; i<=r; i++){
        for(int j = 0; j<=c; j++)
            cout<<memo[i][j]<<' ';
        cout<<endl;
    }
}

int knapSack(int c, int i){
    if(c==0 or i==0) return 0;
    if(memo[c][i]!=-1) return memo[c][i];

    int taken, notTaken;
    notTaken = 0+knapSack(c, i-1);
    if(c>=W[i])
        taken = P[i] + knapSack(c-W[i], i-1);
    else
        taken = 0;
    
    if(notTaken>=taken){
        memo[c][i] = notTaken;
        pTable[c][i] = 'N';
        return notTaken;
    }else{
        memo[c][i] = taken;
        pTable[c][i] = 'T';
        return taken;
    }
}

int bottomUp(int c, int i){
    for(int r = 1; r<=c; r++)
    for(int col = 1; col<=i; col++)
    knapSack(r,col);

    return memo[c][i];
}

void takenItem(int c, int i){
    cout<<"Maximum profit : "<<memo[c][i]<<endl;
    cout<<"Taken items: "<<endl;
    int cap = c;
    while(cap>0 and i>0){
        if(pTable[cap][i]=='T'){
            cout<<"Item "<<i<<" is taken ";
            cout<<"Weight and Price: "<<W[i]<<" "<<P[i]<<endl;
            cap-=W[i];
        }else i--;
    }
}

int main(){
    cout<<"Cap and item:\n";
    int c, i;  cin>>c>>i;
    cout<<"Enter weight: ";
    for(int j = 1; j<=i; j++){
        cin>>W[j];
    }
    cout<<"\nEnter price: ";
    for(int j = 1; j<=i; j++){
        cin>>P[j];
    }
    initMemo();
    printMemo(c,i);
    int result = bottomUp(c, i);
    takenItem(c,i);
    printMemo(c,i);
}