#include <iostream>
using namespace std;
void digit_print(int n)
{
  if (n == 0)
    return;
  digit_print(n / 10);
  cout << n % 10 << " ";
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    if (n == 0)
      cout << 0;
    else
      digit_print(n);
    cout << endl;
  }
}