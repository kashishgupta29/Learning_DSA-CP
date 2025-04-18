#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
  string s;
  getline(cin, s);
  // for (int i = 0; i < s.length(); i++)
  // {
  //   cout << s[i];
  // }
  cout << s << endl;
  reverse(s.begin(), s.end());
  cout << s << endl;
  int res = s.find("as");
  if (res == string::npos)
    cout << "NO";
  else
    cout << "YEs";
}