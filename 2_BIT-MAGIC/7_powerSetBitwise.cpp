#include <iostream>
#include <cmath>
using namespace std;

void printPowerSet(string &s)
{
    int n = s.length();
    // int pSize = (1 << n);
    int pSize = pow(2, n);
    for (int i = 0; i < pSize; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0)
                cout << (s[j]);
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        printPowerSet(s);
    }
}