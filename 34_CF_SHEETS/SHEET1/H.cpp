#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;
    double c = a / b;
    cout
        << "floor " << a << " / " << b << " " << floor(c) << endl
        << "ceil " << a << " / " << b << " " << ceil(c) << endl
        << "round " << a << " / " << b << " " << round(c) << endl;
}