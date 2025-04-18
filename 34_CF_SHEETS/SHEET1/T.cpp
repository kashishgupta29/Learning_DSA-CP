#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> a(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    vector<int> b = a;
    sort(a.begin(), a.end());
    for (int i = 0; i < 3; i++)
        cout << a[i] << endl;
    cout << endl;
    for (int i = 0; i < 3; i++)
        cout << b[i] << endl;
}