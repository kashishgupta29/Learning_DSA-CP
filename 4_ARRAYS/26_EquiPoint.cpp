#include <iostream>
#include <vector>
using namespace std;
bool EquilibrimPoint(vector<int> &arr)
{
  int Left_sum = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    Left_sum += arr[i];
  }
  int Right_sum = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    if (Left_sum == Right_sum)
      return true;
    Right_sum += arr[i];
    Left_sum -= arr[i];
  }
  return false;
}
int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  if (EquilibrimPoint(arr))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}