#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &b = a;
    int *c = &b;
    cout << a << " " << &a << " " << *(&a) << endl;
    cout << b << " " << &b << " " << *(&b) << endl;
    cout << c << " " << &c << " " << *(&c) << " " << *c << endl;
}