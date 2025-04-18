#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        // if (a == b && c % 2 == 0)
        //     cout << "Second" << endl;
        // else if (a == b && c % 2 != 0)
        //     cout << "First" << endl;
        if (a > b)
        {
            a = a - b;
            if (a > c)
                cout << "First" << endl;
            else
            {
                c = c - a;
                if (c % 2 == 0)
                    cout << "Second" << endl;
                else
                    cout << "First" << endl;
            }
        }
        else
        {
            b = b - a;
            if (b > c)
                cout << "Second" << endl;
            else
            {
                c = c - b;
                if (c % 2 == 0)
                    cout << "Second" << endl;
                else
                    cout << "First" << endl;
            }
        }
    }
}