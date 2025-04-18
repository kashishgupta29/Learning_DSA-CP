#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  long long t;
  cin >> t;
  while (t--)
  {
    long long k;
    cin >> k;
    if (k % 3 == 1)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}