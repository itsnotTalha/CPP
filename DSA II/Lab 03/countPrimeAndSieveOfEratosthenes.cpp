#include<iostream>
#include<math.h>
using namespace std;

int P[100];

void printPArray(int n){
    cout<<"********************"<<endl;
    for(int i=1;i<=n;i++){
        cout<<P[i]<<" ";
    }

    cout<<"\n********************"<<endl;
}

int countPrime(int A[],int s, int e){
    if(s==e){
        int num = A[s];
        if(P[num]==1){
            return 1;
        }else{
            return 0;
        }
    }

    int mid = (s+e)/2;
    int count1 = countPrime(A,s,mid);
    int count2 = countPrime(A,mid+1,e);

    return count1+count2;

}


int main(){
    // Sieve of Eratosthenes
    int n = 50;

    P[1]=0;
    for(int i=2;i<=n;i++){
        P[i]=1;
    }

    int lastNumber = sqrt(n)+1;
    //cout<<"lastNUmber  = "<<lastNumber<<endl;

    for(int i=2;i<=lastNumber;i++){
        if(P[i]==1){
            for(int j=i+1;j<=n;j++){
                if(j%i==0){
                    P[j]=0;
                }
            }
        }
    }

    //printPArray(n);

    int arraySize;
    cout<<"Enter the array size"<<endl;
    cin>>arraySize;

    int A[arraySize];

    for(int i=0;i<arraySize;i++){
        cin>>A[i];
    }
    cout<<"\nYou entered the array"<<endl;

    for(int i=0;i<arraySize;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

    int result = countPrime(A,0,arraySize-1);
    cout<<"Total number of prime numbers in the array is "<<result<<endl;


    return 0;
}

