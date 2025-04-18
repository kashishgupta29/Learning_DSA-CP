#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

// SOE approach
// time complexity is O(nlog(log(n)))

void sieve(int n)
{
    vector<int> isprime(n + 1, true);
    for (int i = 2; i <= n; i++)
    {
        if (isprime[i])
        {
            cout << i << " ";
            for (int j = i * i; j <= n; j += i)
            {
                isprime[j] = false;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    sieve(n);
}

// Naive approach with tm( O(n root(n)))

// bool isprime(int i)
// {
//     if (i == 2 || i == 3)
//     {
//         return true;
//     }
//     for (int j = 2; j <= sqrt(i); j++)
//     {
//         if (i % j == 0)
//             return false;
//     }
//     return true;
// }
// vector<int> fun1(int n)
// {
//     vector<int> a;

//     for (int i = 2; i <= n; i++)
//     {
//         if (isprime(i))
//         {
//             a.push_back(i);
//         }
//     }
//     return a;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a = fun1(n);
//     for (int i = 0; i < a.size(); i++)
//     {
//         cout << a[i] << " ";
//     }
// }
