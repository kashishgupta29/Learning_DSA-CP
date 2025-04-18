#include <iostream>
using namespace std;
int main()
{
    char a, b;
    cin >> a;
    if (int(a) >= 65 && a < 97)
        b = char((int(a) + 32));
    else
        b = char((int(a) - 32));
    cout << b;
}