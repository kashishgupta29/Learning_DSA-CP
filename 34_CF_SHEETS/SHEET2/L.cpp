#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (a > b)
        gcd(a - b, b);
    else if (b > a)
        gcd(a, b - a);
    else
        return a;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
}