#include <iostream>
#include <vector>
using namespace std;

// naive approach
// int getSum(vector<int> &arr, int a, int b)
// {
//   int sum = 0;
//   for (int i = a; i <= b; i++)
//   {
//     sum += arr[i];
//   }
//   return sum;
// }

// With presum
int getSum(vector<int> &arr, vector<int> &pSumArr, int a, int b)
{
  if (a == 0)
    return pSumArr[b];
  return pSumArr[b] - pSumArr[a - 1];
}
int main()
{
  int n, start, end;
  cin >> n >> start >> end;
  vector<int> arr(n), preSumArr(n);
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    sum += arr[i];
    preSumArr[i] = sum;
  }
  cout << getSum(arr, preSumArr, start, end);
}