/*
ALgorithm
knapsack(c,i)
1. if c == 0 or i == 0
2. return 0
3. if memo[c][i]!=-1 :
4. return memo[c][i]
5. notTakenvalue = 0 + knapscack(c,i-1)
6. if c>= w[i] : 
7. takenvalue = p[i] + knapsack(c-w[i], i-1)
8. else:
9. takenvalue = 0
10. if notTakenvalue >= takenvalue
11. memo[c][i] = notTakenvalue
12. return notTakenvalue
13. else:
14. memo[c][i] = takenvalue
15. return takenvalue

0 0 0 0 0
0 x x x x
0 x x x x
0 x x x x
0 x x x x
*/

#include<bits/stdc++.h>
using namespace std;
vector<int>P(100);
vector<int>W(100);

vector<vector<int>> memo(100, vector<int>(100, -1));

void PrintMemo(int c, int i){
    cout<<"**************************"<<endl;
    for(int x=0;x<=c;x++){
        for(int y=0;y<=i;y++){
            cout<<memo[x][y]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n**************************"<<endl;
}

int Knapsack(int c, int i){
    if(c==0 or i==0) return 0;

    if(memo[c][i]!=-1) return memo[c][i];

    int notTakenvalue, takenvalue;
    notTakenvalue = 0 + Knapsack(c, i-1);
    if(c>=W[i]){
        takenvalue = P[i] + Knapsack(c-W[i], i-1);
    }else{
        takenvalue = 0;
    }
    if(notTakenvalue>=takenvalue){
        memo[c][i] = notTakenvalue;
        return notTakenvalue;
    }else{
        memo[c][i] = takenvalue;
        return takenvalue;
    }
}

int main(){
    PrintMemo(10,10);
    for(int x = 0; x<=100; x++){
        for(int y = 0; y<=100; y++){
            if(x==0 or y==0) memo[x][y] = 0;
        }
    }
    int c,i;
    cout<<"Enter the capacity and number of item - "<<endl;
    cin>>c>>i;
    cout<<"Enter the prices : "<<endl;
    for(int j = 1; j<=i; j++) cin>>P[j];
    cout<<"Enter the weights : "<<endl;
    for(int j = 1; j<=i; j++) cin>>W[j];

    int result = Knapsack(c,i);
    cout<<result<<endl;
}