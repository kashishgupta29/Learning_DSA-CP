#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
  string s;
  cin >> s;
  vector<int> a;
  for (int i = 0; i < s.length(); i = i + 2)
  {
    a.push_back(s[i] - '0');
  }
  sort(a.begin(), a.end());
  int i = 0;
  for (i = 0; i < a.size() - 1; i++)
  {
    cout << a[i] << "+";
  }
  cout << a[i];
}