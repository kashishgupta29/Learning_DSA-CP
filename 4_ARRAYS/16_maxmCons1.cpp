#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int consecutive_1s(vector<int> &v)
{
  int count = 0;
  int maxm = 0;
  for (int i = 0; i < v.size() - 1; i++)
  {
    if (v[i] == v[i + 1] && v[i + 1] == 1)
    {
      count++;
    }
    else if (v[i] == 1)
      maxm = max(maxm, count + 1);
  }
  if (count != 0)
    maxm = max(maxm, count + 1);
  return maxm;
}
int main()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  cout << consecutive_1s(v);
}