#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    vector<int> a(4);
    for (int i = 0; i < 4; i++)
      cin >> a[i];
    int b = a[0];
    int count = 0;
    for (int i = 1; i < 4; i++)
    {
      if (a[i] > b)
        count++;
    }
    cout << count << endl;
  }
}