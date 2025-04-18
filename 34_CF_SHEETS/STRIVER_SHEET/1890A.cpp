#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
      cin >> vec[i];
    int a1 = vec[0];
    int c_a1 = 0;
    int b1;
    int c_b1 = 0;
    for (int i = 0; i < n; i++)
    {
      if (a1 == vec[i])
        c_a1++;
      else
        b1 = vec[i];
    }
    if (c_a1 == n || n == 2)
      cout << "YES" << endl;
    else
    {
      for (int i = 0; i < n; i++)
      {
        if (b1 == vec[i])
          c_b1++;
      }
      int k = c_a1 + c_b1;
      if (k == n)
      {
        if (n % 2 == 0)
        {
          if (c_a1 == c_b1)
            cout << "YES" << endl;
          else
            cout << "NO" << endl;
        }
        else
        {
          if ((c_a1 + 1) == c_b1 || (c_b1 + 1) == c_a1)
            cout << "YES" << endl;
          else
            cout << "NO" << endl;
        }
      }
      else
        cout << "NO" << endl;
    }
  }
}
