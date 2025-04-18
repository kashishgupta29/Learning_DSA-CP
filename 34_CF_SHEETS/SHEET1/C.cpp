#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int long long x, y;
    cin >> x >> y;
    cout << fixed;
    int long long z = x * y;
    cout << x << " + " << y << " = " << (x + y) << endl;
    cout << x << " * " << y << " = " << z << endl;
    cout << x << " - " << y << " = " << (x - y) << endl;
}