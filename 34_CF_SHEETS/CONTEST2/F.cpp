#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    vector<long long int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int maxm = 0;
    for (int i = 0; i < n; i++)
    {
        long long int ab = 0;
        while (a[i] % 2 == 0)
        {
            ab++;
            a[i] = a[i] / 2;
        }
        maxm = max(ab, maxm);
    }
    cout << maxm;
}