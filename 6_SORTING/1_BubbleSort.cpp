#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
// my implementation
// void BubbleSort(vector<int> &arr)
// {
//   int i = arr.size() - 1;
//   while (i > 0)
//   {
//     for (int j = 0; j < i; j++)
//     {
//       if (arr[j] > arr[j + 1])
//         swap(arr[j], arr[j + 1]);
//     }
//     i--;
//   }
// }

// // video implementation
// void BubbleSort(vector<int> &arr)
// {
//   for (int i = 0; i < arr.size() - 1; i++)
//   {
//     bool swapped = false;
//     for (int j = 0; j < arr.size() - i - 1; j++)
//     {
//       if (arr[j] > arr[j + 1])
//       {
//         swap(arr[j], arr[j + 1]);
//         swapped = true;
//       }
//     }
//     if (swapped == false)
//       break;
//   }
// }

void BubbleSort(vector<int> &arr)
{
  int n = arr.size();
  for (int i = n - 1; i >= 0; i--)
  {
    bool did_swap = false;
    for (int j = 0; j < i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        did_swap = true;
      }
    }
    if (did_swap)
      break;
  }
}
int main()

{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  BubbleSort(arr);
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}