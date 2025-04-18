#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    int x = max(0, m - r);
    cout << -x << " " << (m - x) << endl;
  }
  return 0;
}
