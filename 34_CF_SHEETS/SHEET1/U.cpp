#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // cout << fixed;
    double a;
    cin >> a;
    double c;
    double d = modf(a, &c);
    if (d == 0)
        cout << "int " << c;
    else
        cout << "float " << c << " " << d;
}