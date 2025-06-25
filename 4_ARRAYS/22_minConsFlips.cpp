#include <iostream>
#include <vector>
using namespace std;
int MinConsFlips(vector<int> &arr)
{
  int n = arr.size();
  int count_1 = 0;
  int count_0 = 0;
  for (int i = 0; i < n - 1; i++)
  {
    if (arr[i] != arr[i + 1])
    {
      if (arr[i] == 1)
        count_1++;
      else
        count_0++;
    }
  }
  if (arr[n - 1] == 1)
    count_1++;
  else
    count_0++;
  return min(count_0, count_1);
}
int main()
{
  int n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; i++)
  {
    cin >> vec[i];
  }
  cout << MinConsFlips(vec);
}