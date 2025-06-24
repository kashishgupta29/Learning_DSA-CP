#include <iostream>
#include <bitset>
#include <algorithm>
#include <string>
using namespace std;

int fun(int n)
{
  bitset<8> d(n);
  return d.count();
  // int k = stoi(s);
  // return s.count();
}
int main()
{
  int n;
  cin >> n;
  cout << fun(n);
}