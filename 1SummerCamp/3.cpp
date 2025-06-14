#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  bool isValid(vector<int> &arr, int k, int mid)
  {
    int count = 1;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
      if (sum + arr[i] > mid)
      {
        count++;
        sum = arr[i];
      }
      else
      {
        sum += arr[i];
      }
    }
    return count <= k;
  }
  int Allocate_min_pages(vector<int> &arr, int k)
  {
    // code here
    if (k > arr.size())
      return -1;
    else if (arr.size() == k)
      return arr[arr.size() - 1];
    else
    {
      int low = arr[0];
      int high = 0;
      for (int i = 0; i < arr.size(); i++)
      {
        high += arr[i];
      }
      int ans = -1;
      while (low <= high)
      {
        int mid = low + (high - low) / 2;
        if (isValid(arr, k, mid))
        {
          ans = mid;
          high = mid - 1;
        }
        else
        {
          low = mid + 1;
        }
      }
      return ans;

    }
  }
};