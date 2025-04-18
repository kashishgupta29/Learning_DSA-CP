#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  int maxm = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int count = 0;
  for (int i = 0; i < n - 1; i++)
  {
    count++;
    if (a[i] >= a[i + 1])
      count = 0;

    // else
    // {
    //   maxm = max(count, maxm);
    //   count = 1;
    // }
    maxm = max(count, maxm);
  }

  cout << maxm + 1;
}