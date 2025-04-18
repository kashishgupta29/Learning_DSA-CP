#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

string tung(const string &p, const string &s)
{
  vector<int> pvalue;
  vector<int> svalue;
  if (!p.empty())
  {
    int countp = 1;
    for (int i = 0; i < (int)p.size() - 1; i++)
    {
      if (p[i] == p[i + 1])
      {
        countp++;
      }
      else
      {
        pvalue.push_back(countp);
        countp = 1;
      }
    }
    pvalue.push_back(countp);
  }

  if (!s.empty())
  {
    int counts = 1;
    for (int i = 0; i < (int)s.size() - 1; i++)
    {
      if (s[i] == s[i + 1])
      {
        counts++;
      }
      else
      {
        svalue.push_back(counts);
        counts = 1;
      }
    }
    svalue.push_back(counts);
  }

  if (pvalue.size() != svalue.size())
  {
    return "NO";
  }

  for (int i = 0; i < (int)pvalue.size(); i++)
  {
    if (pvalue[i] > svalue[i] || svalue[i] > 2 * pvalue[i])
    {
      return "NO";
    }
  }
  return "YES";
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
