#include <iostream>
using namespace std;

void funcREC(int n)
{
    if (n == 0)
        return;
    cout << "I love Recursion" << endl;
    funcREC(n - 1);
}
int main()
{
    int n;
    cin >> n;
    funcREC(n);
}