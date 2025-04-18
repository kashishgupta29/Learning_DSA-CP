#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// one way is to first left rotate by 1 then make a loop for d elements(MOST NAIVE)
// void leftRotateOne(vector<int> &arr)
// {
//   int temp = arr[0];
//   for (int i = 1; i < arr.size(); i++)
//   {
//     arr[i - 1] = arr[i];
//   }
//   arr[arr.size() - 1] = temp;
// }
// void leftRotateByD(vector<int> &arr, int d)
// {
//   for (int i = 0; i < d; i++)
//     leftRotateOne(arr);
// }

// extra space wala solution
void leftRotateByD(vector<int> &arr, int d)
{
  vector<int> af(d);
  for (int i = 0; i < d; i++)
    af[i] = arr[i];
  for (int i = d; i < arr.size(); i++)
  {
    swap(arr[i - d], arr[i]);
  }
  for (int i = arr.size() - d; i < arr.size(); i++)
  {
    arr[i] = af[i - arr.size() + d];
  }
}
int main()
{
  int n, d;
  cin >> n >> d;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  leftRotateByD(arr, d);
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}
