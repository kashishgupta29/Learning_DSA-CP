#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    long long int f = (a % 100) * (b % 100) * (c % 100) * (d % 100);
    int k = f % 100;
    if (k == 0 || k == 1 || k == 2 || k == 3 || k == 4 || k == 5 || k == 6 || k == 7 || k == 8 || k == 9)
        cout << 0 << k;
    else
        cout << k;
}