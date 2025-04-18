#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++)
  {
    if (tolower(s[i]) != 'a' && tolower(s[i]) != 'e' && tolower(s[i]) != 'i' && tolower(s[i]) != 'o' && tolower(s[i]) != 'u' && tolower(s[i]) != 'y')
      cout << "." << char(tolower(s[i]));
  }
  // cout << s;
}