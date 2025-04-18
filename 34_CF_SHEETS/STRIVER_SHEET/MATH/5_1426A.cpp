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
    double x, n, k;
    cin >> n >> x;
    if (n <= 2)
      cout << 1 << endl;
    else
    {
      k = ceil(((n - 2) / x));
      cout << k + 1 << endl;
    }
  }
}