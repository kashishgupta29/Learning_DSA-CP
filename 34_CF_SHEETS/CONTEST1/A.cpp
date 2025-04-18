#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    double x, p;
    cin >> x >> p;
    cout << fixed << setprecision(2);
    x = 100 - x;
    cout << (p * 100) / x;
}