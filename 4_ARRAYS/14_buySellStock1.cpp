#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// naive solution with recursion
int BuySellStock(vector<int> &vec, int start, int end)
{
  if (end <= start)
    return 0;
  int profit = 0;
  for (int i = start; i < end; i++)
  {
    for (int j = i + 1; j <= end; j++)
    {
      if (vec[j] > vec[i])
      {
        int curr_profit = vec[j] - vec[i] + BuySellStock(vec, start, i - 1) + BuySellStock(vec, j + 1, end);
        profit = max(curr_profit, profit);
      }
    }
  }
  return profit;
}
// optimized approach
int BuySellStock(vector<int> &vec, int n)
{
  int profit = 0;
  for (int i = 1; i < n; i++)
  {
    if (vec[i] > vec[i - 1])
      profit += (vec[i] - vec[i - 1]);
  }
  return profit;
}
int main()
{
  int n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; i++)
    cin >> vec[i];
  cout << BuySellStock(vec, 0, n - 1) << " " << BuySellStock(vec, n);
}