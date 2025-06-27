#include <iostream>
#include <vector>
using namespace std;
bool SubarrWithGvnSum(vector<int> &arr, int k)
{
  int n = arr.size();
  int s = 0;
  int curr = 0;
  for (int e = 0; e < n; e++)
  {
    curr += arr[e];
    if (k < curr)
    {
      curr -= arr[s];
      s++;
    }
    if (k == curr)
      return true;
  }
  return false;
}
int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  if (SubarrWithGvnSum(arr, k))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}