#include <iostream>
#include <vector>
using namespace std;
int MaxSum(vector<int> &arr, int k)
{
  int n = arr.size();
  int sum = 0;
  for (int i = 0; i < k; i++)
  {
    sum += arr[i];
  }
  int maxm = sum;
  for (int i = k; i < n; i++)
  {
    sum = sum + arr[i] - arr[i - k];
    maxm = max(sum, maxm);
  }
  return maxm;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    cout << MaxSum(arr, k) << endl;
}