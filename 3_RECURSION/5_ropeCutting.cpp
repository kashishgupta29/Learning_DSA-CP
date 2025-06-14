#include <iostream>
#include <math.h>
using namespace std;

int RopeCut(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;
    int res = max(RopeCut(n - a, a, b, c), max(RopeCut(n - b, a, b, c), RopeCut(n - c, a, b, c)));
    if (res == -1)
        return -1;
    return res + 1;
}
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << RopeCut(n, a, b, c);
}
