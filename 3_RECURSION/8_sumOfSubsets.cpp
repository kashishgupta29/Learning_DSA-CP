#include <iostream>
#include <vector>
using namespace std;
int SumSubsets(vector<int> &vec, int n, int sum)
{
  if (n == 0)
  {
    if (sum == 0)
      return 1;
    else
      return 0;
  }
  return SumSubsets(vec, n - 1, sum) + SumSubsets(vec, n - 1, sum - vec[n - 1]);
}
int main()
{
  int n, sum;
  cin >> n >> sum;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cout << SumSubsets(a, n, sum);
}