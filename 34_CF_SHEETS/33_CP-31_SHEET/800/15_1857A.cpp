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
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 1)
                odd++;
        }
        if (odd % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}