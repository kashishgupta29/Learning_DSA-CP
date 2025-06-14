#include <iostream>
#include <vector>
using namespace std;
vector<int> leaderArray(vector<int> &a, int n)
{
  vector<int> vec;
  int maxm = a[n - 1];
  vec.push_back(maxm);
  for (int i = n - 1; i >= 0; i--)
  {
    if (maxm < a[i])
    {
      maxm = a[i];
      vec.push_back(a[i]);
    }
  }
  return vec;
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
  vector<int> res = leaderArray(a, n);
  for (int i = res.size() - 1; i >= 0; i--)
  {
    cout << res[i] << " ";
  }
}