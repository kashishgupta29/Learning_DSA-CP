#include <iostream>
using namespace std;

int long long fact(int n)
{
    int long long a = 1;
    while (n > 0)
    {
        a *= n;
        n--;
    }
    return a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fact(n) << endl;
    }
}