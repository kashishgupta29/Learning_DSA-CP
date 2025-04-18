#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int row1 = m;
        int row2 = m;
        int monkeys = 0;
        if (m > a)
        {
            monkeys += a;
            row1 = row1 - a;
        }
        else
        {
            monkeys += m;
            row1 = 0;
        }
        if (m > b)
        {
            monkeys += b;
            row2 = row2 - b;
        }
        else
        {
            monkeys += m;
            row2 = 0;
        }
        int d = row1 + row2;
        if (d > c)
        {
            monkeys += c;
        }
        else
        {
            monkeys += d;
        }
        cout << monkeys << endl;
    }
}