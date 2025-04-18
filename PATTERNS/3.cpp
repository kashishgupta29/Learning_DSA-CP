// #include <iostream>
// #include <vector>
// #include <cmath>
// using namespace std;
// int main()
// {
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     long long n, k;
//     cin >> n >> k;
//     vector<long long> a(n);
//     for (long long i = 0; i < n; i++)
//     {
//       cin >> a[i];
//       // a[i] = a[i] * pow(2, i);
//     }
//     int count = 0;
//     for (long long i = 0; i < n - k; i++)
//     {
//       int diff = a[i + 1] - a[i];
//       int s = 0;
//       if(diff
//       for (long long j = 0; j < k; j++)
//       {
//         if (a[i + j] < a[i + j + 1])
//           s++;
//       }
//       if ((s == (k)))
//         count++;
//     }
//     cout << count << endl;
//   }
// }