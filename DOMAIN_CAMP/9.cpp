// input an array from user and multiply its each element with 4
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = 4 * a[i];
        cout << a[i] << " ";
    }
}