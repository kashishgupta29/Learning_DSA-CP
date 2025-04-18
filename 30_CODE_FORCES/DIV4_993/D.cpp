// #include <iostream>
// #include <vector>

// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         vector<int> b(n);
//         vector<bool> c(n, true);
//         for (int i = 0; i < n; i++)
//         {
//             int k = a[i];
//             if (c[k - 1])
//             {
//                 b[i] = k;
//                 c[k - 1] = false;
//             }
//         }
//         int count = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (!c[i])
//             {
//                 count++;
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (c[i])
//             {
//                 b[count + i] = i + 1;
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cout << b[i] << " ";
//         }
//         cout << endl;
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
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> b(n, 0);
        vector<bool> used(n, false);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            int k = a[i];
            if (k >= 1 && k <= n && !used[k - 1])
            {
                b[i] = k;
                used[k - 1] = true;
            }
        }
        int next_unused = 1;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == 0)
            {
                while (used[next_unused - 1])
                {
                    next_unused++;
                }
                b[i] = next_unused;
                used[next_unused - 1] = true;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
