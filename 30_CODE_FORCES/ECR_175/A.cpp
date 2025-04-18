#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
  long long t;
  cin >> t;
  while (t--)
  {
    long long An;
    cin >> An;
    int k = An % 15;
    An = An - k;
    long long n = (An / 15) + 1;
    n = n * 3;
    if (k == 0)
      cout << n - 2 << endl;
    else if (k == 1)
      cout << n - 1 << endl;
    else
      cout << n << endl;
  }
}