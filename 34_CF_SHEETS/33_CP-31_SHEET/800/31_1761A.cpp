#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int c = a + b;
        if (n == 1 && a == 1 && b == 1)
        {
            cout << "YES" << endl;
        }
        else if (n == 1 && (a + b) == 1)
        {
            cout << "NO" << endl;
        }
        else if (a == n && b == n)
        {
            cout << "YES" << endl;
        }
        else if (c < n && (n - c) >= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}