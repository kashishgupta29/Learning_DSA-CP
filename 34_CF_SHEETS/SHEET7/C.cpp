#include <iostream>
using namespace std;

void conNum(int n)
{
    if (n == 1)
    {
        cout << 1;
        return;
    }
    cout << n << " ";
    conNum(n - 1);
}
int main()
{
    int n;
    cin >> n;
    conNum(n);
}