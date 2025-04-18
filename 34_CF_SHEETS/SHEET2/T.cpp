#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 0; j < n; j++)
        {
            if ((i + j) >= n)
                cout << "*";
            else
                cout << " ";
        }
        for (j = n; j < i + n - 1; j++)
            cout << "*";
        cout << endl;
    }
}