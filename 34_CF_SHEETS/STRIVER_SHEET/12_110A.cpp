#include <iostream>
#include <vector>
using namespace std;
long long lucky_D(long long n)
{
  long long count = 0;
  while (n > 0)
  {
    int a = n % 10;
    if (a == 7 || a == 4)
      count++;
    n = n / 10;
  }
  return count;
}
bool lucky_number(long long c)
{
  if (c == 0)
    return false;
  bool found = true;
  while (c > 0)
  {
    int a = c % 10;
    if (a != 7 && a != 4)
    {
      found = false;
      break;
    }
    c = c / 10;
  }
  return found;
}
int main()
{
  long long n;
  cin >> n;
  long long count_digits = lucky_D(n);
  if (lucky_number(count_digits))
    cout << "YES";
  else
    cout << "NO";
}