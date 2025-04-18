// // #include <iostream>
// // #include <vector>
// // #include <unordered_set>
// // using namespace std;

// // int main()
// // {
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         int n, m, k;
// //         cin >> n >> m >> k;
// //         vector<int> a(m);
// //         for (int i = 0; i < m; i++)
// //             cin >> a[i];
// //         vector<int> b(k);
// //         unordered_set<int> ques;
// //         for (int i = 0; i < k; i++)
// //         {
// //             cin >> b[i];
// //         }
// //         for (int i = 0; i < k; i++)
// //         {
// //             ques.insert(b[i]);
// //         }
// //         vector<int> r;
// //         for (int i = 0; i < m; i++)
// //         {
// //             if (ques.size() == n || ques.find(a[i]) == ques.end())
// //                 r.push_back(1);
// //             else
// //                 r.push_back(0);
// //         }
// //         for (int i = 0; i < r.size(); i++)
// //             cout << r[i];
// //         cout << endl;
// //     }
// // }

// // #include <iostream>
// // #include <vector>
// // #include <unordered_set>
// // using namespace std;

// // int main()
// // {
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         int n, m, k;
// //         cin >> n >> m >> k;
// //         vector<int> a(m);
// //         for (int i = 0; i < m; i++)
// //             cin >> a[i];

// //         vector<int> b(k);
// //         unordered_set<int> ques;
// //         for (int i = 0; i < k; i++)
// //         {
// //             cin >> b[i];
// //             ques.insert(b[i]);
// //         }
// //         vector<int> r;
// //         if (n > m)
// //         {
// //             for (int i = 0; i < m; i++)
// //                 cout << 0;
// //         }
// //         else
// //         {
// //             for (int i = 0; i < m; i++)
// //             {
// //                 if (ques.find(a[i]) == ques.end())
// //                     r.push_back(1);
// //                 else
// //                     r.push_back(0);
// //             }
// //             for (int i = 0; i < r.size(); i++)
// //                 cout << r[i];
// //         }
// //         cout << endl;
// //     }
// //     return 0;
// // }

// #include <iostream>
// #include <vector>
// #include <unordered_set>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, m, k;
//         cin >> n >> m >> k;
//         vector<int> a(m);
//         for (int i = 0; i < m; i++)
//             cin >> a[i];

//         vector<int> b(k);
//         unordered_set<int> ques;
//         for (int i = 0; i < k; i++)
//         {
//             cin >> b[i];
//             ques.insert(b[i]);
//         }
//         vector<int> r;

//         if (n > m)
//         {
//             // If n > m, print 0 for all m elements.
//             for (int i = 0; i < m; i++)
//                 cout << 0;
//         }
//         else
//         {
//             // Process elements normally when n <= m
//             for (int i = 0; i < m; i++)
//             {
//                 if (ques.find(a[i]) == ques.end())
//                     r.push_back(1);
//                 else
//                     r.push_back(0);
//             }
//             for (int i = 0; i < r.size(); i++)
//                 cout << r[i];
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(m);
        for (int i = 0; i < m; i++)
            cin >> a[i];

        vector<int> b(k);
        unordered_set<int> ques;
        for (int i = 0; i < k; i++)
        {
            cin >> b[i];
            ques.insert(b[i]);
        }
        vector<int> r;

        // When m < n, output should be 0 for all positions in a
        if (m < n)
        {
            for (int i = 0; i < m; i++)
                cout << 0;
        }
        else
        {
            // Process each element of a
            for (int i = 0; i < m; i++)
            {
                // If the element in 'a' is not in 'ques', output 1, else output 0
                if (ques.find(a[i]) == ques.end())
                    r.push_back(1);
                else
                    r.push_back(0);
            }
            // Print the resulting array
            for (int i = 0; i < r.size(); i++)
                cout << r[i];
        }
        cout << endl;
    }
    return 0;
}
