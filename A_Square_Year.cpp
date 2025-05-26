#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int target = stoi(s);
        
        int nNum = sqrt(target);
        if(pow(nNum,2)==target){
            cout<<0<<" "<<nNum<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
