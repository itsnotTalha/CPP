#include<iostream>
using namespace std;
int main(){
    double celcTemp;
    cout << "Enter temp in Celsius: ";
    cin >> celcTemp;
    cout << (celcTemp*(9.0/5))+32 <<"F";
    return 0;
}