#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int last = 0, start = 0;
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == '1')
      {
        start = i;
        break;
      }
    }
    for (int i = (s.length() - 1); i >= 0; i--)
    {
      if (s[i] == '1')
      {
        last = i;
        break;
      }
    }
    int count = 0;
    for (int i = start; i <= last; i++)
      if (s[i] == '0' && start != last)
        count++;
    cout << count << endl;
  }
}