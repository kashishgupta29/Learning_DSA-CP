#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if ((a + b) == 0)
        cout << "NO";
    else if ((a + 1) == b || (b + 1) == a || (a == b))
        cout << "YES";
    else
        cout << "NO";
}