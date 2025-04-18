#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int year = 0;
    int month = 0;
    int days = 0;
    if (n >= 365)
    {
        year = n / 365;
    }
    int k = n - (365 * year);
    if (k >= 30)
    {
        month = k / 30;
    }
    days = k - (30 * month);
    cout << year << " years" << endl
         << month << " months" << endl
         << days << " days" << endl;
}