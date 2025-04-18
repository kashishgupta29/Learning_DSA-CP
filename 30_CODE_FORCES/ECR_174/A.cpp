#include <iostream>
#include <vector>
#include <math.h>
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
    n = n - 2;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
      cin >> b[i];
    bool found = true;
    for (int i = 0; i < n - 2; i++)
    {
      if (b[i] == 1 && b[i + 1] == 0 && b[i + 2] == 1)
      {
        found = false;
        break;
      }
    }
    if (found)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}