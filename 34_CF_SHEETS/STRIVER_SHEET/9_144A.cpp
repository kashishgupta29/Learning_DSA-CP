#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int k;
  cin >> k;
  vector<int> a(k);
  for (int i = 0; i < k; i++)
  {
    cin >> a[i];
  }
  int minm = a[0], maxm = a[0];
  for (int i = 1; i < k; i++)
  {
    minm = min(minm, a[i]);
    maxm = max(maxm, a[i]);
  }
  int n, m;
  for (int i = (k - 1); i >= 0; i--)
  {
    if (a[i] == minm)
    {
      n = i;
      break;
    }
  }
  for (int i = 0; i < k; i++)
  {
    if (a[i] == maxm)
    {
      m = i;
      break;
    }
  }
  if (m < n)
    cout << (m + k - n - 1);
  else
    cout << (m + k - n - 2);
}