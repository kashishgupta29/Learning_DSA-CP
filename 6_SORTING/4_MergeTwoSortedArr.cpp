#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> MergeArr(vector<int> &arr1, vector<int> &arr2)
{
  int i = 0, j = 0;
  vector<int> res;
  while (i < arr1.size() && j < arr2.size())
  {
    if (arr1[i] < arr2[j])
    {
      res.push_back(arr1[i]);
      i++;
    }
    else
    {
      res.push_back(arr2[j]);
      j++;
    }
  }
  return res;
}
int main()
{
  int n, m;
  cin >> n;
  vector<int> arr1(n), arr2(m);
  for (int i = 0; i < n; i++)
    cin >> arr1[i];
  cin >> m;
  for (int i = 0; i < m; i++)
    cin >> arr2[i];
  vector<int> v = MergeArr(arr1, arr2);
  for (auto c : v)
    cout << c << " ";
  cout << endl;
}