#include <iostream>
using namespace std;
int main()
{
    int k, s;
    cin >> k >> s;
    int count = 0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            int b = s - (j + i);
            if (b >= 0 && b <= k)
                count++;
        }
    }
    cout << count;
}