// calculate area
#include <iostream>
using namespace std;
void area(int r)
{
    cout << fixed;
    float pie = 3.14;
    cout << r * r * pie << endl;
}
void area(int l, int b)
{
    // cout << fixed;
    cout << l * b << endl;
}
void area(int base, double height)
{
    cout << fixed;
    cout << 0.5 * base * height << endl;
}
int main()
{
    area(5);
    area(10, 6);
    area(2, 7.0);
}