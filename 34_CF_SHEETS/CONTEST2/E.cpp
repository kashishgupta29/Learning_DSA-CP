#include <iostream>
using namespace std;
int main()
{
    int long long n;
    cin >> n;
    int long long r = n / 4;
    int long long c;
    if (r % 2 != 0)
        c = 3 - (n % 4);
    else
        c = n % 4;

    cout << r << " " << c;
}