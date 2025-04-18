#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
string tung(string &s, string &p)
{
  int a = 0;
  for (int i = 0; i < s.length() && a < p.length(); i++)
  {
    if (s[i] == 'L' && p[a] == 'L')
    {
      if (p[a + 1] == 'L')
        a += 2;
      else
        a += 1;
    }
    else if (s[i] == 'R' && p[a] == 'R')
    {
      if (p[a + 1] == 'R')
        a += 2;
      else
        a += 1;
    }
    else
      return "NO";
  }
  if (s[s.length() - 1] != p[p.length() - 1])
    return "NO";
  return "YES";
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s, p;
    cin >> s >> p;
    cout << tung(s, p) << endl;
  }
}