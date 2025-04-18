// print the salaries
#include <iostream>
using namespace std;
void salary(int n)
{
    cout << "Intern sal = " << n << endl;
}
void salary(int n, int m)
{
    cout << "Employee sal = " << (n + m) << endl;
}
void salary(int n, int m, int k)
{
    cout << "Manager sal = " << (n + m + k) << endl;
}
int main()
{
    int a, b, c, d, e, f;
    cin >> a;
    salary(a);
    cin >> b >> c;
    salary(a, b);
    cin >> d >> e >> f;
    salary(a, b, c);
}