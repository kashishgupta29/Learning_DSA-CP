#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
// vector<string> a;
void permutation(string s, int i)
{

  if (i == (s.length() - 1))
  {
    cout << s << endl;
    // a.push_back(s);
    return;
  }
  for (int j = i; j < s.length(); j++)
  {
    swap(s[i], s[j]);
    permutation(s, i + 1);
    swap(s[i], s[j]);
  }
}
int main()
{
  string s;
  cin >> s;
  permutation(s, 0);
}