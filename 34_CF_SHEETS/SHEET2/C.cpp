#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int even = 0;
    int odd = 0;
    int pos = 0;
    int neg = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            a[i] = -a[i];
            neg++;
        }
        else if (a[i] > 0)
            pos++;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << "Even: " << even << endl
         << "Odd: " << odd << endl
         << "Positive: " << pos << endl
         << "Negative: " << neg << endl;
}