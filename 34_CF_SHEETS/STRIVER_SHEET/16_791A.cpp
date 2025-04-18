#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
  double a, b;
  cin >> a >> b;
  double A = log10(b) - log10(a);
  double B = log10(3) - log10(2);
  int k = A / B;
  int n = ceil(A / B);
  if (k == n)
    cout << n + 1;
  else
    cout << n;
}