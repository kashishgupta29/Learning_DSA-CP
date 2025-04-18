#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int a, b;
        if (x > y)
        {
            a = y;
            b = x;
        }
        else
        {
            a = x;
            b = y;
        }
        int sum = 0;
        for (int i = (a + 1); i < b; i++)
        {
            if (i % 2 != 0)
                sum += i;
        }
        cout << sum << endl;
    }
}
