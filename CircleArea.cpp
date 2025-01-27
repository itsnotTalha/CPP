#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Enter radius of circle: ";
    double radius;
    cin >> radius;
    double area = M_PI * pow(radius,2);
    cout << "Calculated area : " << area;
    return 0;
}
