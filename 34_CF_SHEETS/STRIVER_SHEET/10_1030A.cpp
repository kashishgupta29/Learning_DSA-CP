#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  bool found = false;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] == 1)
      found = true;
  }
  if (found)
    cout << "HARD";
  else
    cout << "EASY";
}