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
    int a, b, n;
    cin >> a >> b >> n;
    int count = 0;
    bool found = true;
    while (found)
    {
      if (a > n || b > n)
        found = false;
      else
        count++;
      if (a < b)
        a += b;
      else
        b += a;
    }
    cout << count << endl;
  }
}