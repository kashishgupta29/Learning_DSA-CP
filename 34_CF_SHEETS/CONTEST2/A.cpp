#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int c = a - b;
    if (c > 0)
        cout << c;
    else
        cout << 0;
}