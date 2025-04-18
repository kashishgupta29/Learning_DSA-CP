#include <iostream>
#include <vector>
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
        {
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        if (sum % n != 0)
            cout << "NO" << endl;
        else
        {
            int c = sum / n;
            int doi = 0, de = 0;
            int ee = 0, eo = 0;
            int odd = 0;
            int codd = 0;
            int even = 0;
            int ceven = 0;
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    even += a[i];
                    ceven++;
                    if (a[i] > c)
                        doi += a[i] - c;
                    else
                        eo += c - a[i];
                }
                else
                {
                    odd += a[i];
                    codd++;
                    if (a[i] > c)
                        de += a[i] - c;
                    else
                        ee += c - a[i];
                }
                // if (a[i] > c)
                // {
                //     d += a[i] - c;
                // }
                // else
                // {
                //     e += c - a[i];
                // }
            }
            if ((eo == doi) && (odd % codd == 0) && (even % ceven == 0) && (ee = de))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
