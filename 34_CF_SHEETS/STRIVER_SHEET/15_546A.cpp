#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int k, n, w;
  cin >> k >> n >> w;
  int m = k * ((w) * (w + 1)) / 2;
  if (n >= m)
    cout << 0 << endl;
  else
    cout << m - n << endl;
}