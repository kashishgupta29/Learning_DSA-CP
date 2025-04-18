#include <iostream>
using namespace std;

// // Look up Table Solution: in this the solution takes O(1)
int tbl[256];
// Function to initialise the lookup table
void initialize()
{
    tbl[0] = 0;
    for (int i = 1; i < 256; i++)
    {
        tbl[i] = tbl[i & (i - 1)] + 1;
    }
}
int countSetBits(int n)
{
    return (tbl[n & 255] +
            tbl[(n >> 8) & 255] +
            tbl[(n >> 16) & 255] +
            tbl[n >> 24]);
}
int main()
{
    // Initialise the lookup table
    initialize();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << countSetBits(n);
    }
}

// // Brian Kerningam Algorithm
// int countBit(int n)
// {
//     int count = 0;
//     while (n > 0)
//     {
//         n = n & (n - 1);
//         count++;
//     }
//     return count;
// }

// naive method
// int countBit(int n)
// {
//     int count = 0;
//     while (n > 0)
//     {
//         if (n % 2 == 1)
//             count++;
//         n = n / 2;
//     }
//     return count;
// }
//
// int main()
// {
//     int n;
//     cin >> n;
//     cout << countBit(n);
// }
