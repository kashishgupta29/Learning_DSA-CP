#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int long long n, m, k;
    cin >> n >> m >> k;
    int long long a = min(n / 2, k);
    int long long b = min(n, min(m, k));
    n = n - b;
    k = k - b;
    int long long c = min(n / 2, k);
    cout << max(a, b + c);
}