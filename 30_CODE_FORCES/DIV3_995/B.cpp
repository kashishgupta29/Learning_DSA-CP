// #include <iostream>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long int n, a, b, c;
//         cin >> n >> a >> b >> c;
//         int count = 1;
//         int sum = a;
//         while (true)
//         {
//             if (sum >= n)
//                 break;
//             else if (count % 3 == 2)
//                 sum += c;
//             else if (count % 3 == 0)
//                 sum += a;
//             else
//                 sum += b;
//             count++;
//         }
//         cout << count << endl;
//     }
// }

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a, b, c;
        cin >> n >> a >> b >> c;
        long long cyc = a + b + c;
        long long f = n / cyc;
        long long rem = n % cyc;
        long long count = f * 3;
        long long sum = f * cyc;

        if (rem > 0)
        {
            count++;
            sum += a;
            if (rem > a)
            {
                count++;
                sum += b;
                if (rem > a + b)
                {
                    count++;
                    sum += c;
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}
