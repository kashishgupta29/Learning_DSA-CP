#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  int A = c * d;
  int B = ((k * l) / nl);
  int C = (p / np);
  int minm = min(A, min(B, C));
  cout << minm / n;
}