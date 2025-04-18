#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int x = 0;
  vector<string> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (a[i] == "X++")
      x = x + 1;
    else if (a[i] == "++X")
      x = x + 1;
    else if (a[i] == "X--")
      x = x - 1;
    else
      x = x - 1;
  }
  cout << x;
}