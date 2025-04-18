#include <iostream>
#include <string>
#include <stdlib.h>
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
        while (n > 9)
        {
            count++;
            n = n / 10;
        }
        cout << count * 9 + n << endl;
    }
}