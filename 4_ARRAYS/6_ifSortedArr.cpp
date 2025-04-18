#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool count = true;
    for (int i = 0; i < (n - 1); i++)
    {
        if (arr[i] > arr[i + 1])
        {
            count = false;
            break;
        }
    }
    if (count)
        cout << "YES";
    else
        cout << "NO";
}