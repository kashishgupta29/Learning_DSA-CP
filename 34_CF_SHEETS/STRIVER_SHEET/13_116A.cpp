#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int n;
  cin >> n;
  // int maxm = 0;
  vector<vector<int>> a(n, vector<int>(2));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cin >> a[i][j];
    }
  }
  int maxm = a[0][1] - a[0][0];
  int current = a[0][1] - a[0][0];
  for (int i = 1; i < n; i++)
  {
    current = current - a[i][0] + a[i][1];
    maxm = max(current, maxm);
  }
  cout << maxm;
}