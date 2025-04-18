#include <iostream>
#include <vector>
using namespace std;
void leftRotateByOne(vector<int> &arr)
{
  // int k=arr[0];
  for (int i = 0; i < arr.size() - 1; i++)
  {
    swap(arr[i], arr[i + 1]);
  }
}
int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  leftRotateByOne(a);
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}