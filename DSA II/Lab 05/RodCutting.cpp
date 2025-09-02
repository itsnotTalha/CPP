#include<iostream>
using namespace std;
int P[100]; // rod prices for different lengths
int memo[100];
int pTable[100];

void initMemo(){
    memo[0]=0;
    for(int i=1;i<=99;i++){
        memo[i]=-1;
    }
}
void printMemo(int L){
    cout<<"********************"<<endl;
    for(int i=0;i<=L;i++){
        cout<<memo[i]<<" ";
    }
    cout<<"\n********************"<<endl;
}

void printPtable(int L){
    cout<<"********************"<<endl;
    for(int i=0;i<=L;i++){
        cout<<pTable[i]<<" ";
    }
    cout<<"\n********************"<<endl;
}

void printCuts(int L){

}

int RodCutting(int L){
    if(L==0) return 0;
    if (memo[L]!=-1) return memo[L];

    int maxValue = INT_MIN;
    int maxValueCut;
    for(int i=1;i<=L;i++){
        int value = P[i]+RodCutting(L-i);
        if(value>maxValue){
            maxValue=value;
            maxValueCut = i;
        }
    }
    memo[L]=maxValue;
    pTable[L]=maxValueCut;
    return maxValue;
}

void bottomUp(int L){
    // use a loop like before
}

int main(){
    cout<<"Enter the rod length"<<endl;
    int L;
    cin>>L;
    for(int i=1;i<=L;i++){
        cin>>P[i];
    }
    initMemo();
    printMemo(L);

    int result = RodCutting(L);
    printMemo(L);
    printPtable(L);
    return 0;
}

/*
4
1 2 8 9

AUthor : Shadman Adeeb
*/
