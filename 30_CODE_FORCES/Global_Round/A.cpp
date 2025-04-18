#include <iostream>
#include <string>
using namespace std;

int if33(long long int x)
{
    while (x > 0)
    {
        string s = to_string(x);
        size_t p = s.find("33");
        if (p != string::npos)
        {
            s = s.substr(0, p) + s.substr(p + 2);
            x = stoll(s.empty() ? "0" : s);
        }
        else if (x >= 33)
            x -= 33;
        else
            break;
    }
    return x;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        if (if33(n) == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
