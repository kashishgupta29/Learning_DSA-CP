#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int res = 0;
        int count = false;
        for (int i = 0; i < n; i++)
        {
            count = true;
            for (int j = 0; j < n; j++)
            {
                if ((j != i) && (abs(a[i] - a[j]) % k == 0))
                {
                    count = false;
                    break;
                }
            }
            if (count)
            {

                res = i + 1;
                break;
            }
        }
        if (count == true)
        {
            cout << "YES" << endl;
            cout << res << endl;
        }
        else
            cout << "NO" << endl;
    }
}
