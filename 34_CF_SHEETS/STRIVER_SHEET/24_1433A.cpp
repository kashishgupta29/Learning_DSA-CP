#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int count_digit(int n)
{
  int digit = 0;
  while (n > 0)
  {
    digit++;
    n = n / 10;
  }
  return digit;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int digit = count_digit(n);
    int number = (n % 10) - 1;
    int sum1 = 10 * (number);
    int sum2 = (digit * (digit + 1)) / 2;
    cout << sum1 + sum2 << endl;
  }
}