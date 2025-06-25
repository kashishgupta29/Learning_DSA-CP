#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

// optimized approach (make two funcs 1) kandane and 2nd -ve ke liye kandane usse min pta chal jaega toh minus kr denge for maxm;
int Normal_kandane(vector<int> &arr)
{
  int curr = arr[0];
  int maxm = arr[0];
  for (int i = 1; i < arr.size(); i++)
  {
    curr = max(curr, curr + arr[i]);
    maxm = max(maxm, curr);
  }
  return maxm;
}

int circular_sum(vector<int> &arr)
{
  int normal_Sum = Normal_kandane(arr);
  if (normal_Sum < 0)
    return normal_Sum;
  int sum = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    sum += arr[i];
    arr[i] = -arr[i];
  }
  int maxm_circluar = sum + Normal_kandane(arr);
  return maxm(normal_Sum, maxm_circluar);
}

// Naive Solution
int circular_sum(vector<int> &arr)
{
  int maxm = arr[0];
  for (int i = 0; i < arr.size(); i++)
  {
    int curr = arr[i];
    int curr_maxm = arr[i];
    for (int j = 1; j < arr.size(); j++)
    {
      int index = (i + j) % arr.size();
      curr += arr[index];
      curr_maxm = max(curr_maxm, curr);
    }
    maxm = max(maxm, curr_maxm);
  }
  return maxm;
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
  cout << circular_sum(arr);
}