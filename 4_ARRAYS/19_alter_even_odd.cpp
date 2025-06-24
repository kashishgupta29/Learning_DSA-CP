#include <iostream>
#include <vector>
using namespace std;
int alternateOddEven(vector<int> &arr)
{
  int maxm = 1;
  int curr = 1;
  for (int i = 0; i < arr.size() - 1; i++)
  {
    if ((arr[i] % 2 == 0 && arr[i + 1] % 2 == 1) || (arr[i] % 2 == 1 && arr[i + 1] % 2 == 0))
    {
      curr++;
    }
    else
    {
      maxm = max(maxm, curr);
      curr = 1;
    }
  }
  maxm = max(maxm, curr);
  return maxm;
}
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
    {
      cin >> arr[i];
    }
    cout << alternateOddEven(arr) << endl;
  }
}