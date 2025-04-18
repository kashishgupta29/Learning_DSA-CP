#include <iostream>
#include <vector>
using namespace std;
vector<int> cal_str(string &a)
{
  vector<int> temp;
  int count = 1;
  for (int i = 0; i < a.length() - 1; i++)
  {
    if (a[i] == a[i + 1])
      count++;
    else
    {
      temp.push_back(count);
      count = 1;
    }
  }
  temp.push_back(count);
  return temp;
}
bool tung(vector<int> s, vector<int> p)
{
  if (p.size() != s.size())
    return false;
  for (int i = 0; i < s.size(); i++)
  {
    if ((p[i] > (2 * s[i])) || (p[i] < s[i]))
      return false;
  }
  return true;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string p, s;
    cin >> p >> s;
    vector<int> s_in = cal_str(s);
    vector<int> p_in = cal_str(p);
    if (tung(s_in, p_in))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}
