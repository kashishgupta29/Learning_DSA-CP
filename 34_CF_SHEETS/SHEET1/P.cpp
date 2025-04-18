#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = n / 1000;
    if (k % 2 == 0)
        cout << "EVEN";
    else
        cout << "ODD";
}