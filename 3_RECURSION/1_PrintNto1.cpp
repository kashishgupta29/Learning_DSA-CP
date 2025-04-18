#include <iostream>
using namespace std;
int count(int n)
{
    if (n == 1)
        return 1;
    cout << n << endl;
    count(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << count(n);
}