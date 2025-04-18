#include <iostream>
using namespace std;
int main()
{
  string a;
  cin >> a;
  for (int i = 0; i < a.length(); i++)
  {
    if (a[i] == '9' && i != 0)
      a[i] = '0';
    else if (a[i] == '8')
      a[i] = '1';
    else if (a[i] == '7')
      a[i] = '2';
    else if (a[i] == '6')
      a[i] = '3';
    else if (a[i] == '5')
      a[i] = '4';
  }
  cout << a;
}
