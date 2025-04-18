#include <iostream>
#include <vector>
using namespace std;
int main()
{
  long n, k;
  cin >> n >> k;
  while (k--)
  {
    if (n % 10 == 0)
      n = n / 10;
    else
      n = n - 1;
  }
  cout << n;
}
