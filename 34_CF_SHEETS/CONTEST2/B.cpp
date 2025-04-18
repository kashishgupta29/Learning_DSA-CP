#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = n / 2 + 1;
    int i;
    for (i = 1; i < a; i++)
    {
        int j;
        for (j = 1; j < a; j++)
        {
            if (i == j)
                cout << "\\";
            else
                cout << "*";
        }
        if (j == a)
        {
            cout << "*";
        }
        for (j = a + 1; j <= n; j++)
        {
            if (((i + j) == (n + 1)))
                cout << "/";
            else
                cout << "*";
        }
        cout << endl;
    }
    for (int j = 1; j <= n; j++)
    {
        if (j % a == 0)
            cout << "X";
        else
            cout << "*";
    }
    cout << endl;
    for (i = a + 1; i <= n; i++)
    {
        int j;
        for (j = 1; j < a; j++)
        {
            if ((i + j) == (n + 1))
                cout << "/";

            else
                cout << "*";
        }
        if (j == a)
            cout << "*";
        for (j = a + 1; j <= n; j++)
        {
            if (i == j)
                cout << "\\";
            else
                cout << "*";
        }
        cout << endl;
    }
}