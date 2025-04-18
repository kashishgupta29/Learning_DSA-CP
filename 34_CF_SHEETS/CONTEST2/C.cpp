#include <iostream>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<long long int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long int> v;
    int c = 0;
    for (int i = 0; i < n; i += k)
    {
        long long int m = 1000000000;
        int b = k;
        while (b > 0 && c < n)
        {
            m = min(a[c], m);
            b--;
            c++;
        }
        v.push_back(m);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}