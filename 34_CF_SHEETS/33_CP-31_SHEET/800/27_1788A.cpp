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
        int two_s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                two_s++;
        }
        if (two_s == 0)
            cout << 1 << endl;
        else if (two_s % 2 != 0)
            cout << -1 << endl;
        else
        {
            int mul = 0;
            int mid = two_s / 2;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                    mul++;
                if (mul == mid)
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }
}