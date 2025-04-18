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
    vector<vector<char>> a(n, vector<char>(4));
    vector<char> b;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        cin >> a[i][j];
        if (a[i][j] == '#')
          b.push_back((j + 1));
      }
    }
    for (int i = (b.size() - 1); i >= 0; i--)
      cout << b[i] << " ";
    cout << endl;
  }
}