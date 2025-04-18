#include <iostream>
#include <vector>
using namespace std;
bool IsPalindrome(vector<int> &arr)
{
  for (int i = 0; i < arr.size() / 2; i++)
  {
    if (arr[i] != arr[arr.size() - i - 1])
      return false;
  }
  return true;
}
int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  if (IsPalindrome(arr))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}