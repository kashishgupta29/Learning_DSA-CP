#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

bool LuckyArr(vector<int> &arr)
{
  int minm = arr[0];
  for (int i = 0; i < arr.size(); i++)
    minm = min(arr[i], minm);
  int count = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] == minm)
      count++;
  }
  return (count % 2 == 0);
}
int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  if (!LuckyArr(arr))
    cout << "Lucky" << endl;
  else
    cout << "Unlucky" << endl;
}