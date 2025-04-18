#include <iostream>
#include <math.h>
using namespace std;
// CHECK IF KTH BIT IS SET OR NOT
bool Kbit(int n, int k)
{
    int m = 1 << (k - 1);
    // int m = n >> (k-1);
    // return m & 1;
    return n & m;
}

// bool Kbit(int n, int k)
// {
//     for (int i = 1; i < k; i++)
//     {
//         n = n / 2;
//         if (n == 0)
//         {
//             return false;
//         }
//     }
//     return n % 2;
// }

int main()
{
    int n, k;
    cin >> n >> k;
    cout << Kbit(n, k);
}