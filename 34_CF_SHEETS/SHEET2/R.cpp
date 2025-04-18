#include <iostream>
using namespace std;
int main()
{
    while (true)
    {
        int n, m;
        cin >> n >> m;
        if (n > 0 && m > 0)
        {
            int a = min(n, m);
            int b = max(n, m);
            int sum = 0;
            for (int i = a; i <= b; i++)
            {
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum << endl;
        }
        else
            break;
    }
}