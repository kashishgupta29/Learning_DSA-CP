#include <iostream>
#include <bitset>
#include <string>
using namespace std;

string decimalToBinary(int number)
{
  // return
  return bitset<64>(number).to_string();
  // return temp.substr(temp.find('1')); // for 32-bit binary
}

int main()
{
  int num = 26;
  string binary = decimalToBinary(num);
  cout << "Binary: " << binary << endl; // prints all 32 bits
  // string k = binary.substr(binary.find('1'));
  // To remove leading zeros
  // cout << "Binary without leading zeros: " << k << endl;
  // int m = stoi(k);
  // cout << m << endl;
  return 0;
}
