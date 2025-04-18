#include <iostream>
using namespace std;
bool isprime(int n)
{
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 4; i * i <= (n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    if (isprime(n))
        cout << "YES";
    else
        cout << "NO";
}