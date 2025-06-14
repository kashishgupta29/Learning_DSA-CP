#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

// naive solution
//  int maximumDiff(vector<int> &vec, int n)
//  {
//    int diff = vec[1] - vec[0];
//    for (int i = 0; i < n; i++)
//    {
//      for (int j = i + 1; j < n; j++)
//      {
//        diff = max(diff, vec[i] - vec[j]);
//      }
//    }
//    return diff;
//  }

// bext solution O(n)
int maximumDiff(vector<int> &vec, int n)
{
  int res = vec[1] - vec[0];
  int mim_val = vec[0];
  for (int i = 1; i < n; i++)
  {
    res = max(res, vec[i] - mim_val);
    mim_val = min(mim_val, vec[i]);
  }
  return res;
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
  int res = maximumDiff(a, n);
  cout << res;
}