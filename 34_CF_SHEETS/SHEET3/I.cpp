#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int SmallestPair(vector<int> &arr)
{
  int minm = arr[0] + arr[1] + 1;
  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = i + 1; j < arr.size(); j++)
    {
      int sum = arr[i] + arr[j] + j - i;
      minm = min(minm, sum);
    }
  }
  return minm;
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
      cin >> arr[i];
    cout << SmallestPair(arr) << endl;
  }
}