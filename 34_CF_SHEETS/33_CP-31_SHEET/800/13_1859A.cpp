#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    if (n == 1)
        cout << 1;
    else
    {
        for (int i = 1; i <= n; i++)
            if (i % 2 == 0)
                a.push_back(i);
        int count = 1;
        while (a.size() > 1)
        {
            if (count % 2 == 0)
            {
                int i = 0;
                while (i < n)
                {
                    a.erase(a.begin() + i);
                    i = i + 2;
                }
                // a.erase()
            }
            else
            {
                int i = a.size() - 1;
                while (i >= 0)
                {
                    a.erase(a.begin() + i);
                    i -= 2;
                }
            }
            count++;
        }
        cout << a[0];
    }
}
