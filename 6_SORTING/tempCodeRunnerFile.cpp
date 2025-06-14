
#include <iostream>
#include <math.h>
using namespace std;
long long comb(int n, int r)
{
  if (r > (n - r))
  {
    r = n - r;
  }
  long long ans = 1;
  for (int i = 0; i < r; i++)
  {
    ans = ans * (n - i);
    ans = ans / (i + 1);
  }
  return ans;
}
int main()
{
  int n;
  cin >> n;
  for (int i = 0; i <= n; i++)
  {
    cout << comb(n, i) << " ";
  }
}