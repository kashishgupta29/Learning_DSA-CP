#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double f = b * log(a);
    double g = d * log(c);
    if (f > g)
        cout << "Yes";
    else
        cout << "No";
}