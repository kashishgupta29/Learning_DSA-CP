#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// recursive solution

void reversed(vector<int> &v, int left, int right)
{
  while (left < right)
  {
    swap(v[left], v[right]);
    left++;
    right--;
  }
}

void leftRotateByD(vector<int> &v, int n, int d)
{
  reversed(v, 0, d - 1);
  reversed(v, d, n - 1);
  reversed(v, 0, n - 1);
}

int main()
{
  int n, d;
  cin >> n >> d;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  d = d % n;
  leftRotateByD(arr, n, d);
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}
