#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<vector<int>> G(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> G[i][j];
      }
    }
    vector<int> ans(2 * n + 1);
    vector<bool> visited(2 * n + 1, false);
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        int k = i + j + 2;
        int m = G[i][j];
        if (!visited[m])
        {
          ans[k] = m;
          visited[m] = true;
        }
      }
    }
    for (int i = 1; i <= 2 * n; i++)
    {
      if (!visited[i])
      {
        ans[1] = i;
      }
    }
    for (int i = 1; i < ans.size(); i++)
    {
      cout << ans[i] << " ";
    }
    cout << endl;
  }
}