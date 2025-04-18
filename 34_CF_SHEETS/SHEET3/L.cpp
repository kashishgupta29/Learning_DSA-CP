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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    for (int i = 0; i < arr.size(); i++)
    {
      int maxm = arr[i];
      for (int j = i; j < arr.size(); j++)
      {
        maxm = max(maxm, arr[j]);
        cout << maxm << " ";
      }
    }
    cout << endl;
  }
}