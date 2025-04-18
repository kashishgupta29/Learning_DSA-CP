// #include <iostream>
// using namespace std;

// bool findPower(unsigned int x, unsigned int n)
// {
//     if (n < 1 || x < 1)
//         return false;
//     if (n == 1)
//         return false;

//     int y = 0;
//     unsigned long long result = 1;

//     while (result < n)
//     {
//         result *= x;
//         y++;
//         if (result == n)
//             return true;
//     }

//     return false;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int k, l1, r1, l2, r2;
//         cin >> k >> l1 >> r1 >> l2 >> r2;
//         int count = 0;
//         for (int x = l1; x <= r1; x++)
//         {
//             for (int y = l2; y <= r2; y++)
//             {
//                 int d = x / y;
//                 bool n = findPower(k, d);
//                 {
//                     if (n)
//                         count++;
//                 }
//             }
//         }
//         cout << count << endl;
//     }
// }

#include <iostream>
#include <vector>
using namespace std;

vector<long long> precomputePowers(long long k, long long limit)
{
    vector<long long> powers;
    long long value = 1;
    while (value <= limit)
    {
        powers.push_back(value);
        if (value > limit / k)
            break;
        value *= k;
    }
    return powers;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        vector<long long> powers = precomputePowers(k, r2);

        long long count = 0;

        for (long long x = l1; x <= r1; ++x)
        {

            for (long long power : powers)
            {
                long long y = x * power;
                if (y >= l2 && y <= r2)
                {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
