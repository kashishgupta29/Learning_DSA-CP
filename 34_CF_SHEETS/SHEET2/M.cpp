#include <iostream>
#include <string>
using namespace std;

bool LuckyNO(int n)
{
    string a = to_string(n);
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != '4' && a[i] != '7')
            return false;
    }
    return true;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int res = 0;
    for (int i = a; i <= b; i++)
    {
        if (LuckyNO(i))
        {
            cout << i << " ";
            res++;
        }
    }
    if (res == 0)
        cout << -1;
}