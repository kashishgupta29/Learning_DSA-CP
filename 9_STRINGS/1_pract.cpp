#include <iostream>
#include <string>
using namespace std;
int main()
{
  string s;
  cin >> s;
  int t;
  cin >> t;
  while (t--)
  {
    string m;
    cin >> m;
    if (s.find(m) == string::npos)
      cout << -1 << endl;
    else
      cout << s.find(m) << endl;
  }
}