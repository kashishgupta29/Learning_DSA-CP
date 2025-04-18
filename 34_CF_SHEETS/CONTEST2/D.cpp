#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long long int a, b;
        cin >> a >> b;
        long long int c = (a * (a + 1)) / 2;
        long long int d = (b * (b + 1)) / 2;
        if (d > c)
            cout << d - c + a << endl;
        else
            cout << c - d + b << endl;
    }
}