#include <iostream>
#include <vector>
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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      sum = sum ^ a[i];
    }
    if (sum > 0 && n % 2 == 0)
      cout << -1 << endl;
    else
      cout << sum << endl;
  }
}