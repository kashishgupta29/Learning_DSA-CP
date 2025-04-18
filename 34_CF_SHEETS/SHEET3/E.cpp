#include <iostream>
#include <vector>
using namespace std;
pair<int, int> LowestNumber(vector<int> &arr)
{
  int a = arr[0], b = 0;
  for (int i = 1; i < arr.size(); i++)
  {
    if (arr[i] < a)
    {
      a = arr[i];
      b = i;
    }
  }
  return {a, b};
}
int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  int max = -1;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  pair<int, int> res = LowestNumber(arr);
  cout << res.first << " " << res.second + 1 << endl;
}