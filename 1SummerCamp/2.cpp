#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> myfunc(vector<int> &vec, vector<vector<int>> &queries)
{
  vector<int> result;
  int j = 0;
  while (j < queries.size())
  {
    int count = 0;
    for (int i = 0; i < vec.size(); i++)
    {
      int a = queries[j][0];
      int b = queries[j][1];
      long c = a * b;
      if (a == b)
      {
      }
      else if (b % a == 0)
      {
      }
      else if (a % b == 0)
      {
      }
      else if ()

      // int m = queries[j][0] * queries[j][1];
      // if (m == 0 && queries[j][0] == 0 )
      // {

      // }
      //   if (vec[i] % m == 0)
      //     count--;
      // if (vec[i] % queries[j][0] == 0)
      //   count++;
      // if (vec[i] % queries[j][1] == 0)
      //   count++;
    }
    result.push_back(count);
    j++;
  }
  return result;
}
int main()
{
  int n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; i++)
  {
    cin >> vec[i];
  }
  int q;
  cin >> q;
  vector<vector<int>> queries(q, vector<int>(2));
  for (int i = 0; i < q; i++)
  {
    cin >> queries[i][0] >> queries[i][1];
  }
  vector<int> result = myfunc(vec, queries);
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << endl;
  }
}