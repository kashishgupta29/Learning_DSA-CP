#include <iostream>
#include <vector>
using namespace std;
int main()
{
  long long n;
  cin >> n;
  long long i = 1;
  long long sum = 0;
  long long k = 0;
  // bool found = true;
  while (true)
  {
    k = (i * (i + 1)) / 2;
    sum += k;
    if (sum > n)
    {
      i--;
      break;
    }
    else if (sum == n)
      break;
    else
      i++;
  }
  cout << i;
}