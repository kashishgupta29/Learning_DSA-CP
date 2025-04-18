#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int exist = false;
    int count = 0;
    if (n == 1)
    {
      if (s[0] == '.')
        cout << 1 << endl;
      else
        cout << 0 << endl;
    }
    else
    {
      if (s[0] == '.')
        count++;
      if (s[n - 1] == '.')
        count++;
      for (int i = 1; i < n - 1; i++)
      {
        if (s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.')
        {
          exist = true;
        }
        if (s[i] == '.')
          count++;
      }
      if (exist)
        cout << 2 << endl;
      else
        cout << count << endl;
    }
  }
}