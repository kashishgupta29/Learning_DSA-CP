#include <iostream>
using namespace std;

void countNum(int n)
{
    if (n == 0)
        return;
    countNum(n - 1);
    cout << n << endl;
}
int main()
{
    int n;
    cin >> n;
    countNum(n);
}