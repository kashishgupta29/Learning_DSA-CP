#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

// optimized solution (moore voting algorithm)
int majorityElement(vector<int> &arr)
{
  int n = arr.size();
  int res = 0;
  int count = 1;
  for (int i = 1; i < n; i++)
  {
    if (arr[i] == arr[res])
      count++;
    else
      count--;
    if (count == 0)
    {
      res = i;
      count = 1;
    }
  }
  count = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[res] == arr[i])
      count++;
  }
  if (count > (n / 2))
    return arr[res];
  return -1;
}
// naive approach
//  int majorityElement(vector<int> &arr)
//  {
//    int n = arr.size();
//    int count = 0;
//    for (int i = 0; i < n; i++)
//    {
//      int x = arr[i];
//      for (int j = 0; j < n; j++)
//      {
//        if (x == arr[j])
//          count++;
//      }
//      if (count > (n / 2))
//        return x;
//      else
//        count = 0;
//    }
//    return -1;
//  }
int main()
{
  int n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; i++)
  {
    cin >> vec[i];
  }
  cout << majorityElement(vec);
}