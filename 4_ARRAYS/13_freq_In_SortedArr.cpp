#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<pair<int, int>> FreqInSortedArr(vector<int> &a, int n)
{
  vector<pair<int, int>> freq;
  int count = 0;
  int i = 0;
  for (i = 0; i < n - 1; i++)
  {
    if (a[i] == a[i + 1])
    {
      count++;
    }
    else
    {
      ++count;
      freq.push_back({a[i], count});
      count = 0;
    }
  }
  ++count;
  freq.push_back({a[i], count});
  return freq;
}
int main()
{
  int n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; i++)
    cin >> vec[i];
  vector<pair<int, int>> res = FreqInSortedArr(vec, n);
  for (int i = 0; i < res.size(); i++)
  {
    cout << res[i].first << " " << res[i].second << endl;
  }
}