#include<iostream>
using namespace std;
int main(){
    int sales;
    cin >> sales;
    double stateTax = ((double)4/100)*sales;
    double countyTax = (2/100.0)*sales;

    cout << "Total sale: " << sales <<endl << "State Tax: " << stateTax << endl << "County Tax: " << countyTax << endl;
    cout << "Total Tax: " << stateTax+countyTax;
    return 0;
}