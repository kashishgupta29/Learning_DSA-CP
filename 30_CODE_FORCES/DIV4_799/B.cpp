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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    int count = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++)
    {
      if (a[i] == a[i + 1])
        count++;
    }
    if (count == 0)
      cout << n << endl;
    else if (count % 2 == 0)
      cout << n - count << endl;
    else
      cout << n - count - 1 << endl;
  }
}