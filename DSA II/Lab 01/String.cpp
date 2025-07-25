#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "";
    string s2 = "Hello World";
    cout << s2.find("lo") << endl;
    // starting position to how many position he wants to go including starting point
    cout << s2.substr(2, 5) << endl;

    vector<int> myV;
    myV.push_back(2);
    myV.push_back(3);
    myV.push_back(4);

    // heres 1 is the index position where the value will be added
    myV.insert(myV.begin() + 1, 10);
    myV.erase(myV.begin() + 2);

    for (int a : myV)
        cout << a << " ";

    return 0;
}
