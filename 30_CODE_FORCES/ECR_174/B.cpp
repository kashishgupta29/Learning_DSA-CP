#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

static const int max_color = 700 * 700;

int main()
{
  int t;
  cin >> t;
  static bool p[max_color + 1];
  static bool adjacency[max_color + 1];

  while (t--)
  {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m));
    vector<int> usedColors;
    usedColors.reserve(n * m);

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> grid[i][j];
      }
    }

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        int c = grid[i][j];
        if (!p[c])
        {
          p[c] = true;
          adjacency[c] = false;
          usedColors.push_back(c);
        }
      }
    }

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        int c = grid[i][j];

        if (j + 1 < m)
        {
          if (grid[i][j + 1] == c)
          {
            adjacency[c] = true;
          }
        }

        if (i + 1 < n)
        {
          if (grid[i + 1][j] == c)
          {
            adjacency[c] = true;
          }
        }
      }
    }

    long long S = 0;
    long long maxCost = 0;

    for (int i = 0; i < usedColors.size(); i++)
    {
      int c = usedColors[i];
      if (!p[c])
        continue;
      int costC;
      if (adjacency[c])
      {
        costC = 2;
      }
      else
      {
        costC = 1;
      }
      S += costC;
      if (costC > maxCost)
      {
        maxCost = costC;
      }
    }

    long long ans = S - maxCost;
    cout << ans << endl;

    for (int i = 0; i < usedColors.size(); i++)
    {
      int c = usedColors[i];
      p[c] = false;
    }
  }

  return 0;
}