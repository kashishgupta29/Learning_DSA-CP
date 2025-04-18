#include <iostream>
#include <vector>
#include <algorithm>
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
        int sum = 0;
        bool res = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (sum != a[i])
                sum += a[i];
            else
            {
                res = false;
                break;
            }
        }
        if (res)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else
        {
            sort(a.begin(), a.end());
            {
                if (a[0] == a[n - 1])
                    cout << "NO" << endl;
                else
                {
                }
            }
        }
    }
}