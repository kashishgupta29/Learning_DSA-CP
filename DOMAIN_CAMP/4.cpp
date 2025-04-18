// find the largest digit in a number
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int digit = 0;
    while (n > 0)
    {
        int a = n % 10;
        digit = max(a, digit);
        n = n / 10;
    }
    cout << digit << endl;
}