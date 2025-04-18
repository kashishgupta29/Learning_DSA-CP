#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  int i = 1;
  int sum = 0;
  while (sum < n)
  {
    sum = (i * (i + 1)) / 2;
    cout << s[sum - 1];
    i++;
  }
}