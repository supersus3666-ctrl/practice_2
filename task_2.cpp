#include <iostream>
using namespace std;

int main()
{
    double number;
    int dollar, cent;

    cout << "Number: ";
    cin >> number;

    dollar = (int)number;
    cent = (int)((number - dollar) * 100 + 0.5);

    cout << dollar << " dollars and "
        << cent << " cents" << endl;

    return 0;
}