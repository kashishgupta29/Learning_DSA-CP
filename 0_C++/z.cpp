#include <iostream>
#include <bitset>
using namespace std;
int fun2(int n)
{
  bitset<12> b(n);
  return b.count();
}
int main()
{
  int n;
  cin >> n;
  cout << fun2(n);
}

//  int optimizedSetBits(int n)
//   {
//       if (n == 0) return 0;

//       int x = log2(n);  // Find the most significant bit position

//       int bitsUpto2PowX = x * (1 << (x - 1));  // Set bits in all numbers from 1 to 2^x - 1
//       int msbBits = n - (1 << x) + 1;          // Set bits from 2^x to n
//       int rest = optimizedSetBits(n - (1 << x));  // Remaining bits

//       return bitsUpto2PowX + msbBits + rest;
//   }