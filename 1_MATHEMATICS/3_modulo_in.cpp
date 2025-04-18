#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int modInverse(int a, int m)
{
    if (gcd(a, m) == 1)
    {
        if (m == 1 & a != 1)
            return -1;

        for (int i = 1; i < 10000; i++)
        {
            int c = m * i + 1;
            if (c % a == 0)
            {
                if (a != 1)

                    return c / a;
                else
                    return a;
            }
        }
        return -1;
    }
    return -1;
}

int main()
{
    int a, m;
    cin >> a >> m;
    cout << modInverse(a, m);
}