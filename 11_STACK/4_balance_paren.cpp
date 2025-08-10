#include <iostream>
#include <vector>
#include <stack>
using namespace std;
bool isBalanced_paren(string &str)
{
  stack<char> s;
  for (int i = 0; i < str.length(); i++)
  {
    char c = str[i];
    if (c == '(' || c == '{' || c == '[')
    {
      s.push(c);
    }
    else if (s.empty())
      return false;
    else if ((s.top() == '(' && c == ')') || (s.top() == '[' && c == ']') || (s.top() == '{' && c == '}'))
    {
      s.pop();
    }
    else
      return false;
  }
  return s.empty();
}
int main()
{
  string str;
  cin >> str;
  if (isBalanced_paren(str))
    cout << "true";
  else
    cout << "false";
}