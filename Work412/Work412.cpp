#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i;
    double P;

    P = 0;
    i = 1;
    while (i <= 15)
    {
        P += (pow(sin(i), 2) + pow(cos(1 / i), 2)) / pow(i, 2);
        i++;
    }
    cout << "P = " << P << endl;

    P = 0;
    i = 1;
    do
    {
        P += (pow(sin(i), 2) + pow(cos(1 / i), 2)) / pow(i, 2);
        i++;
    } while (i <= 15);
    cout << "P = " << P << endl;

    P = 0;
    for (i = 1; i <= 15; i++)
    {
        P += (pow(sin(i), 2) + pow(cos(1 / i), 2)) / (pow(i, 2));
    }
    cout << "P = " << P << endl;

    P = 0;
    for (i = 15; i >= 1; i--)
    {
        P += (pow(sin(i), 2) + pow(cos(1 / i), 2)) / pow(i, 2);
    }
    cout << "P = " << P << endl;

    return 0;
}