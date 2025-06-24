#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int consecutive_Ones(vector<int> &vec)
{
  int maxm = 0;
  int count = 0;
  for (int i = 0; i < vec.size(); i++)
  {
    if (vec[i] == 1)
      count++;
    else
    {
      maxm = max(count, maxm);
      count = 0;
    }
  }
  maxm = max(count, maxm);
  return maxm;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
      cin >> vec[i];
    }
    cout << consecutive_Ones(vec) << endl;
  }
}