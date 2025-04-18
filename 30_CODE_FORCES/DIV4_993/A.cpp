#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        int a = 1;
        int b = n - 1;
        while (b > 0)
        {
            count++;
            b--;
            a++;
        }
        cout << count << endl;
    }
}
