#include <iostream>
using namespace std;

int main()
{
    double deposit, percent, monthly;

    cout << "Enter deposit amount (euro): ";
    cin >> deposit;

    cout << "Enter annual interest rate (%): ";
    cin >> percent;

    monthly = deposit * percent / 100 / 12;

    cout << "Monthly payment: "
        << monthly << " euro" << endl;

    return 0;
}