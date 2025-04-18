#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int b = arr[i];
        while (b)
        {
            cout << a;
            b--;
        }
        cout << endl;
        // cout << arr[i] * a << endl;
    }
}