#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;
int main()
{
  int a = 29;
  string k = "KASHISH";
  // cout << a << endl;
  // cout << hex;
  // cout << a << " ";
  // cout << showbase;
  // cout << a << endl;
  // cout << oct;
  // cout << a << endl;
  // cout << lowercase;
  bitset<8> b(a);
  int ka = b;
  cout << ka;
}