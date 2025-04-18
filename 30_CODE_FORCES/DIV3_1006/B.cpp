#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n;
    cin >> n;
    vector<char> a(n);
    long long cdash = 0, cundersc = 0;
    for (long long i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] == '-')
        cdash++;
      else
        cundersc++;
    }
    long long count = cdash / 2;
    cout << (cundersc * (count) * (cdash - count)) << endl;
  }
}

