#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int minm = a[1] - a[0];
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                minm = min(a[j] - a[i], minm);
            }
        }
        if (minm < 0)
            cout << 0 << endl;
        else if (minm == 0)
            cout << 1 << endl;
        else
            cout << minm / 2 + 1 << endl;
    }
}