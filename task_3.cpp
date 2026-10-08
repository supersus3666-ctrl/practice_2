#include <iostream>
using namespace std;

int main()
{
    int days, weeks;

    cout << "Days: ";
    cin >> days;

    weeks = days / 7;
    days %= 7;

    cout << weeks << " weeks and "
        << days << " days" << endl;

    return 0;
}