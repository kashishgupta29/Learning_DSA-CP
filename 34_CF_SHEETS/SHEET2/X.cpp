#include <iostream>
#include <cmath>
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
        while (n > 0)
        {
            if (n % 2 == 1)
                count++;
            n = n / 2;
        }
        int sum = 0;
        for (int i = 0; i < count; i++)
        {
            sum += pow(2, i);
        }
        cout << sum << endl;
    }
}