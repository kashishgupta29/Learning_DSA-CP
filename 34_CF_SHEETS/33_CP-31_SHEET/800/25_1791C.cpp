#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int start = 0;
        int end = n - 1;
        int count = 0;
        while (start < end)
        {
            if ((s[start] == '0' && s[end] == '1') || (s[start] == '1' && s[end] == '0'))
            {
                ++count;
                ++start;
                --end;
            }
            else
                break;
        }
        cout << n - 2 * count << endl;
    }
}
