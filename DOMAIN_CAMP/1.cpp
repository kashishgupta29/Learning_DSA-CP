// count number of digits
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    if (n < 0)
    {
        n = -n;
    }
    if (n == 0)
        cout << "1";
    else
    {
        while (n > 0)
        {
            count++;
            n = n / 10;
        }
        cout << count;
    }
}