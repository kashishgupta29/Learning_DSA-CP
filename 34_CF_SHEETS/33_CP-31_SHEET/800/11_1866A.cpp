#include <iostream>
#include <algorithm>
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
        if (a[i] < 0)
            a[i] = -a[i];
    }
    sort(a.begin(), a.end());
    cout << a[0];
}