#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i].length();
        }
        int count = 0;
        for (int l : b)
        {
            if (m >= l)
            {
                m -= l;
                count++;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
    }
}