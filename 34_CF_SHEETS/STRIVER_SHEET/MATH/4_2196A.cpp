#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n;
    cin >> n;
    vector<long long> a(n);
    long long sum = 0;
    long long even = 0;
    for (long long i = 0; i < n; i++)
    {
      cin >> a[i];
      sum += a[i];
      if (a[i] % 2 == 0)
        even++;
    }
    if (sum % 2 != 0)
      cout << "YES" << endl;
    else
    {
      if (even >= 1 && even < n)
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }
  }
}