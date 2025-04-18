#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int d = 0;
    vector<int> b;
    while (n > 0)
    {
      int a = n % 10;
      if (a > 0)
        b.push_back(a * pow(10, d));
      d++;
      n = n / 10;
    }
    cout << b.size() << endl;
    for (int i = 0; i < b.size(); i++)
    {
      if (b[i] > 9 && b[i] % 10 == 9)
        cout << b[i] + 1 << " ";
      else
        cout << b[i] << " ";
    }
    cout << endl;
  }
}