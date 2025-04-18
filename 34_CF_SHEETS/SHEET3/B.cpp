#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long k;
    cin >> k;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            cout << i;
            found = true;
            break;
        }
    }
    if (!found)
        cout << -1;
}