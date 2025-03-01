#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
        string s;
        cin >> s;  

        int num = (s[0] - '0') * 10 + (s[1] - '0'); 
        
        string period = (num >= 12) ? "PM" : "AM";
        
       
        if (num >= 12) {
            if (num > 12) {
                num -= 12; 
            }
        } else {
            if (num == 0) {
                num = 12;  
            }
        }

        // Prepare the output in 12-hour format
        stringstream result;
        result << setw(2) << setfill('0') << num << ":" << s.substr(3, 2) << " " << period;

        cout << result.str() << endl;
    }
    return 0;
}
