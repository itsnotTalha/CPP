#include <iostream>
#include <sstream>
#include <thread>
#include <chrono>
#include <iomanip>
#include <cstdlib>
#include <regex>
#include <windows.h>

using namespace std;

// Convert HH MM SS or HH:MM:SS to total seconds
int parseTimeToSeconds(string timeStr) {
    // Replace ':' with space to normalize input
    replace(timeStr.begin(), timeStr.end(), ':', ' ');

    int h = 0, m = 0, s = 0;
    stringstream ss(timeStr);
    ss >> h >> m >> s;

    if (ss.fail()) return -1;

    return h * 3600 + m * 60 + s;
}

// Format seconds as HH:MM:SS
string formatTime(int totalSeconds) {
    int h = totalSeconds / 3600;
    int m = (totalSeconds % 3600) / 60;
    int s = totalSeconds % 60;

    stringstream ss;
    ss << setfill('0') << setw(2) << h << ":"
       << setw(2) << m << ":"
       << setw(2) << s;
    return ss.str();
}

int main() {
    string userInput;
    cout << "Target time (HH:MM:SS or H M S): ";
    getline(cin, userInput); // use getline to allow spaces

    int targetSeconds = parseTimeToSeconds(userInput);

    if (targetSeconds < 0) {
        cout << "Invalid time format! Please use something like 1:30:00 or 1 30 0" << endl;
        return 1;
    }

    for (int i = 0; i <= targetSeconds; ++i) {
#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif
        cout << "----------Timer----------\n\t" << formatTime(i) << endl;
        cout << "-------Remaining---------\n\t" << formatTime(targetSeconds - i) << endl<<endl<<endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif
    Beep(523, 1000);
    cout << "Time reached!" << endl;
    cout << "Time reached!" << endl;
    cout << "Time reached!" << endl;
    cout << "Time reached!" << endl;
    return 0;
}
