#include <iostream>
#include <vector>
using namespace std;
int majorityElement(vector<int> &a)
{
  int freq = 0, ans = 0;
  for (int i = 0; i < a.size(); i++)
  {
    if (freq == 0)
      ans = a[i];
    if (ans == a[i])
      freq++;
    else
      freq--;
  }
  return ans;
}
int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  cout << majorityElement(a);
}