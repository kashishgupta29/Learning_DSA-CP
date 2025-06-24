#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

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