#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  if (a == b)
    cout << 1;
  else
  {
    int c = ceil((log10(b) - log10(a)) / (log10(3) - log10(2)));
    cout << c;
  }
  return 0;
}
