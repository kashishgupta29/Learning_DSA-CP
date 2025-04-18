// #include <iostream>
// #include <vector>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> a(n), b(n);
//         int suma = 0;
//         int sumb = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             suma += a[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> b[i];
//             sumb += b[i];
//         }
//         sumb = sumb - b[0];
//         int maxm = suma - sumb;
//         for (int i = 0; i < n - 1; i++)
//         {
//             int x = suma - a[i];
//             int y = sumb - b[i + 1];
//             maxm = max(x - y, maxm);
//         }
//         maxm = max(maxm, a[n - 1]);
//         cout << maxm << endl;
//     }
// }
