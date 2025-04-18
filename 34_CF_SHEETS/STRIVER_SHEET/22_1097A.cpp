#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  vector<string> v(5);
  for (int i = 0; i < 5; i++)
    cin >> v[i];
  bool found = false;
  for (int i = 0; i < 5; i++)
  {
    if (v[i].front() == s[0] || v[i].back() == s[1])
    {
      found = true;
      break;
    }
  }
  if (found)
    cout << "YES";
  else
    cout << "NO";
}