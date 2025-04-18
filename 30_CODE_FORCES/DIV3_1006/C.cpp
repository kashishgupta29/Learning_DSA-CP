#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

long long fun1(long long m)
{
  if (m == 0)
    return 0;
  long long mask = 0;
  --m;
  while (m > 0)
  {
    mask |= m;
    m >>= 1;
  }
  return mask;
}

int main()
{
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    long long n, x;
    cin >> n >> x;

    long long mx = 0;
    for (long long i = 0; i <= n + 1; i++)
    {
      if ((i & ~x) != 0LL)
      {
        mx = i;
        break;
      }
      if (i == n + 1)
      {
        mx = i;
        break;
      }
    }
    if (mx > n + 1)
      mx = n + 1;

    long long bestk = 0;
    for (long long k = mx; k >= 0; k--)
    {
      long long subor = fun1(k);
      if (subor == x)
      {
        if (k <= n)
        {
          bestk = k;
          break;
        }
      }
      else
      {
        if (k + 1 <= n)
        {
          bestk = k;
          break;
        }
      }
    }

    long long finalor = fun1(bestk);
    bool needx = (finalor != x);

    vector<long long> ans;
    ans.reserve(n);
    for (long long i = 0; i < bestk; i++)
    {
      ans.push_back(i);
    }
    if (needx)
      ans.push_back(x);

    while ((long long)ans.size() < n)
    {
      ans.push_back(0LL);
    }

    for (auto &v : ans)
      cout << v << " ";
    cout << endl;
  }

  return 0;
}
