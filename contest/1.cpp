#include <iostream>
#include <vector>
#include <math.h>
#include <string>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    getline(cin, s);
    string a = "";
    a = a + s[0];
    for (int i = 1; i < s.length() - 1; i++)
    {
      if (s[i] == ' ')
      {
        a += s[i + 1];
      }
    }
    cout << a << endl;
  }
}