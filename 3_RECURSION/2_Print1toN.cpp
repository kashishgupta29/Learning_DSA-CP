#include <iostream>
using namespace std;

void coun(int n)
{
    if (n == 0)
        return;
    coun(n - 1);
    cout << n << endl;
}
int main()
{
    int n;
    cin >> n;
    coun(n);
}