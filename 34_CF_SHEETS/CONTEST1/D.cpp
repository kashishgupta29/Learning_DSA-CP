#include <iostream>
using namespace std;
int main()
{
    int long long a, b, c, d;
    cin >> a >> b >> c >> d;
    int long long A = a + b - c;
    int long long B = a + b * c;
    int long long C = a - b * c;
    int long long D = a - b + c;
    int long long E = a * b + c;
    int long long F = a * b - c;
    if (A == d || B == d || C == d || D == d || E == d || F == d)
        cout << "YES";
    else
        cout << "NO";
}
