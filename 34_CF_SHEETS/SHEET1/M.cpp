#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    int b = int(a);
    if (b >= 48 && b < 65)
        cout << "IS DIGIT";
    else if (b >= 65 && b < 97)
        cout << "ALPHA" << endl
             << "IS CAPITAL" << endl;
    else
        cout << "ALPHA" << endl
             << "IS SMALL" << endl;
}