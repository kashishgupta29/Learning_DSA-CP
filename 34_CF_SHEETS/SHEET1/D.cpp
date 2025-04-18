#include <iostream>
using namespace std;
int main()
{
    int long long a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << fixed;
    int long long x = a * b;
    int long long y = c * d;
    cout << "Difference" << " = " << x - y;
}