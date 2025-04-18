// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k, x;
//         cin >> n >> k >> x;
//         int m = n % k;
//         vector<int> a;
//         int found = true;
//         if ((k == 1 && x == 1) || (m == 1 && x == 1))
//             found = false;
//         // else if (m == 1 && x == 1)
//         //     // cout << "NO" << endl;
//         //     found = false;
//         else if (m == 0 && (x != k))
//         {
//             while (n != 0)
//             {
//                 a.push_back(k);
//                 n = n - k;
//             }
//         }
//         else if (x != 1)
//         {
//             //     while (n > k)
//             //     {
//             //         a.push_back(k);
//             //         n = n - k;
//             //     }
//             while (n--)
//             {
//                 a.push_back(1);
//             }
//         }
//         else
//         {
//             while (n > k)
//             {
//                 a.push_back(k);
//                 n = n - k;
//             }
//             if (n % 2 == 0)
//                 while (n > 0)
//                 {
//                     a.push_back(2);
//                     n = n - 2;
//                 }
//             else
//             {
//                 while (n != 3)
//                 {
//                     a.push_back(2);
//                     n = n - 2;
//                 }
//             }
//         }

//         if (found)
//         {
//             cout << "YES" << endl
//                  << a.size() << endl;
//             for (int i = 0; i < a.size(); i++)
//             {
//                 cout << a[i] << " ";
//             }
//             cout << endl;
//         }
//         else
//             cout << "NO" << endl;
//     }
// }

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        bool found = true;
        vector<int> a;
        if (k == 1 && x == 1)
            found = false;
        else if (x != 1)
        {
            while (n--)
                a.push_back(1);
        }
        else
        {
            if (n % 2 == 0)
                while (n > 0)
                {
                    a.push_back(2);
                    n = n - 2;
                }
            else
            {
                while (n != 3)
                {
                    a.push_back(2);
                    n = n - 2;
                }
            }
        }
        if (found)
        {
            cout << "YES" << endl
                 << a.size() << endl;
            for (int i = 0; i < a.size(); i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
}