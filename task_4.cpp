#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double distance, time, speed;
    int minutes, seconds;

    cout << "Calculating running speed." << endl;
    cout << "Enter the length of distance(meters) = ";
    cin >> distance;

    cout << "Enter time(min.sec) = ";
    cin >> time;

    minutes = (int)time;
    seconds = (int)((time - minutes) * 100 + 0.5);

    time = minutes * 60 + seconds;

    speed = distance / time * 3.6;

    cout << fixed << setprecision(2);
    cout << "Time: " << minutes << " min "
        << seconds << " sec = "
        << time << " seconds" << endl;

    cout << "You were running at speed "
        << speed << " km/h" << endl;

    return 0;
}