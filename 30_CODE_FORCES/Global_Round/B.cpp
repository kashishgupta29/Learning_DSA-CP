#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n + 1);
        int count = 1;
        for (int i = 1; i <= n; i++)
        {
            if (i % k == 0)
            {
                a[i] = count;
                count++;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (i % k != 0)
            {
                a[i] = count;
                count++;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}