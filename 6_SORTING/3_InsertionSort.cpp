#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void InsertionSort(vector<int> &arr)
{
  for (int i = 1; i < arr.size(); i++)
  {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j--;
    } 
    arr[j + 1] = key;
  }
}
int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  InsertionSort(arr);
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}