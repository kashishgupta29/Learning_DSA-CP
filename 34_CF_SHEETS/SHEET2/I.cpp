#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = n;
    int rev = 0;
    int digit;
    while (n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    cout << rev << endl;
    if (temp == rev)
        cout << "YES";
    else
        cout << "NO";
}
