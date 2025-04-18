#include <iostream>
using namespace std;

int main()
{
    unsigned int a, b;

    cin >> a >> b;

    // BITWISE AND
    cout << "BITWISE AND: " << (a & b) << endl;

    // BITWISE OR
    cout << "BITWISE OR: " << (a | b) << endl;

    // BITWISE XOR(^)
    cout << "BITWISE XOR: " << (a ^ b) << endl;

    // BITWISE LEFT SHIFT
    cout << "BITWISE LEFT SHIFT: " << (a << 1) << "  " << (b << 1) << endl;

    // BITWISE RIGHT SHIFT
    cout << "BITWISE RIGHT SHIFT: " << (a >> 1) << "  " << (b >> 1) << endl;

    // BITWISE NOT
    cout << "BITWISE NOT: " << (~a) << "  " << (~b) << endl;
}