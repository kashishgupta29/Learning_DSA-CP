#include <iostream>
using namespace std;
int digitssum(int n)
{
    int d = 0;
    while (n > 0)
    {
        int a = n % 10;
        d += a;
        n = n / 10;
    }
    return d;
}
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (digitssum(i) >= a && digitssum(i) <= b)
        {
            count += i;
        }
    }
    cout << count << endl;
}