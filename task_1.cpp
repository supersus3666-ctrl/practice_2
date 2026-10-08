#include <iostream>
using namespace std;

int main()
{
    int seconds, minutes, hours;

    cout << "Seconds: ";
    cin >> seconds;

    hours = seconds / 3600;
    seconds %= 3600;

    minutes = seconds / 60;
    seconds %= 60;

    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;

    return 0;
}