#include <iostream>
#include <vector>
#include <math.h>
#include <climits>
using namespace std;
int Maximum_subarray_sum(vector<int> &a)
{
  int current = 0;
  int maxm = -INT_MAX;
  for (int i = 0; i < a.size(); i++)
  {
    current += a[i];
    maxm = max(current, maxm);
    if (current < 0)
      current = 0;
  }
  return maxm;
}
int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cout << Maximum_subarray_sum(a);
}