#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n + 1);
        a[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            int d = a[i + 1] - a[i];
            if (d > max)
                max = d;
        }
        int max2 = 2 * (x - a[n]);
        if (max2 > max)
            cout << max2 << endl;
        else
            cout << max << endl;
    }
}