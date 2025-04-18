#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k, p;
    cin >> n >> k >> p;
    if (k == 0)
      cout << 0 << endl;
    else
    {
      if (k < 0)
        k = abs(k);
      int a = k / p;
      if (k % p == 0 && a <= n)
        cout << a << endl;
      else if (k % p != 0 && ((a + 1) <= n))
      {

        cout << a + 1 << endl;
      }
      else
        cout << -1 << endl;
    }
  }
}