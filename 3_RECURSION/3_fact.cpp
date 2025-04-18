#include <iostream>
using namespace std;

// not tail recursive
// int fact(int n)
// {
//     if (n == 0 || n == 1)
//         return 1;
//     return n * fact(n - 1);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << fact(n);
// }

// Making it tail recursive
int fact(int n, int k)
{
    if (n == 0 || n == 1)
        return k;
    return fact(n - 1, n * k);
}
int main()
{
    int n;
    cin >> n;
    cout << fact(n, 1);
}