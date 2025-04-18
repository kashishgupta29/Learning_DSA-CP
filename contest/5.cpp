#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

string tung(const string &p, const string &s)
{
  vector<int> pvalue;
  vector<int> svalue;
  int countp = 0, counts = 0;
  for (int i = 0; i < p.size() - 1; i++)
  {
    if (p[i] == p[i + 1])
      countp++;
    else
    {
      pvalue.push_back(countp);
      countp = 0;
    }
  }
  countp++;
  pvalue.push_back(countp);
  for (int i = 0; i < s.size() - 1; i++)
  {
    if (s[i] == s[i + 1])
      counts++;
    else
    {
      svalue.push_back(counts);
      counts = 0;
    }
  }
  counts++;
  svalue.push_back(counts);

  if (pvalue.size() == svalue.size())
  {
    for (int i = 0; i < pvalue.size(); i++)
    {
      if ((pvalue[i] > svalue[i]) || ((pvalue[i] * 2) < svalue[i]))
        return "NO";
    }
    return "YES";
  }
  else
    return "NO";
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string p, s;
    cin >> p >> s;
    cout << tung(p, s) << endl;
  }
}
