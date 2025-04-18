#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << 0;
    else
    {
        int a = 0;
        int b = 1;
        cout << a << " " << b << " ";
        for (int i = 2; i < n; i++)
        {
            int c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
    }
}
