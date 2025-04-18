#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<char> a(n);
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    sum += a[i] - '0';
  }
  cout << sum << endl;
}