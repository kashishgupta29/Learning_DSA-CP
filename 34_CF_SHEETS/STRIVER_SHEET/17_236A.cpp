#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  string a;
  cin >> a;
  vector<char> v;
  for (int i = 0; i < a.length(); i++)
  {
    v.push_back(a[i]);
  }
  sort(v.begin(), v.end());
  int count = 0;
  for (int i = 0; i < v.size() - 1; i++)
  {
    if (v[i] != v[i + 1])
      count++;
  }
  if (count % 2 == 0)
    cout << "IGNORE HIM!";
  else
    cout << "CHAT WITH HER!";
}