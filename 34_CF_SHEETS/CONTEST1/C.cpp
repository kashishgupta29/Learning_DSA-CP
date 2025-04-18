#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    int b = int(a);
    if (a == 'z')
        cout << 'a';
    else
        cout << char(b + 1);
}