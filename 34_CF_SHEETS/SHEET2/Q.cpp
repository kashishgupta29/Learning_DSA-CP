#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 0)
            cout << 0;
        while (n)
        {
            int d = n % 10;
            cout << d << " ";
            n = n / 10;
        }
        cout << endl;
    }
}