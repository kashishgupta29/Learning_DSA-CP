#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << abs(sum);
}