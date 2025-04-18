#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 2;
    if (n < 2)
        cout << -1;
    while (i <= n)
    {
        cout << i << endl;
        i += 2;
    }
}