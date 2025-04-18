#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;
        if (t % 3 == 0)
            cout << "Second" << endl;
        else
            cout
                << "First" << endl;
    }
}