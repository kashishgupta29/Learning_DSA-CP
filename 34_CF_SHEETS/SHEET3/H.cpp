#include <iostream>
#include <vector>
using namespace std;
void BubbleSort(vector<int> &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = 0; j < arr.size() - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
    }
  }
}
int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  BubbleSort(a);
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;
}