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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int x = a[i] - b[i + 1];
            if (x > 0)
                sum += x;
        }
        sum = sum + a[n - 1];
        cout << sum << endl;
    }
}