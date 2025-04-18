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
            cin >> a[i];
        int non_zero = 0;
        for (int i = 0; i < n; i++)
            if (a[i] != 0)
                non_zero++;
        int b, c;
        for (int i = 0; i < n; i++)
            if (a[i] != 0)
                b = i;
        for (int i = n - 1; i >= 0; i--)
            if (a[i] != 0)
                c = i;
        if (non_zero == 0)
            cout << 0 << endl;
        else
        {
            for (int i = b; i <= c; i++)
            {
                        }
        }
    }
}