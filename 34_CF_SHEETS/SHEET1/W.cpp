#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    int k;
    if (s == '+')
        k = a + b;
    else if (s == '-')
        k = a - b;
    else
        k = a * b;
    if (k == c)
        cout << "Yes" << endl;
    else
        cout << k << endl;
}