// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <math.h>
// using namespace std;
// long long int gcd(long long int a, long long int b)
// {
//   if (a == b)
//     return a;
//   else if (a > b)
//     return gcd(a - b, b);
//   else
//     return gcd(a, b - a);
// }
// int main()
// {
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     long long int a, b;
//     cin >> a >> b;
//     long long int k = gcd(a, b);
//     long long int l = a / k * b;
//     cout << l << endl;
//   }
// }

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long l, r;
    cin >> l >> r;
    long long m = l * 2;
    if (m <= r)
      cout << l << " " << m << endl;
    else
      cout << -1 << " " << -1 << endl;
  }
}