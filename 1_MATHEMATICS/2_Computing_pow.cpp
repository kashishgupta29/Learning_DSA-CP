#include <iostream>
#include <math.h>

using namespace std;
// computing x^n

int com_pw(int x, int n)
{
    int res = 1;
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    int k = x;
    while (n > 0)
    {
        if (n % 2 != 0)
            res = res * x;
        x = x * x;
        n = n / 2;
    }
    return res;
}
int main()
{
    int x, n;
    cin >> x >> n;

    cout << com_pw(x, n);
}