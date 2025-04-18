#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> v(2 * n);
    vector<int> a, b;
    for (int i = 0; i < 2 * n; i++)
    {
      cin >> v[i];
      if (i % 2 == 0)
        a.push_back(v[i]);
      else
        b.push_back(v[i]);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    cout << abs(a[n / 2] - b[n / 2]);
  }
}


