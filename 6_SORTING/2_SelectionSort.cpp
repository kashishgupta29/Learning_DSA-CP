#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <limits.h>
using namespace std;

// in place sorting
void SelectionSort(vector<int> &arr)
{ 
  for (int i = 0; i < arr.size(); i++)
  {
    int mid_ind = i;
    for (int j = i + 1; j < arr.size(); j++)
    {
      if (arr[j] < arr[mid_ind])
        mid_ind = j;
    }
    swap(arr[mid_ind], arr[i]);
  }
}
int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  SelectionSort(arr);
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}