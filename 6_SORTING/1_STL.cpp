#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// //For arrays
// int main()
// {
//     int arr[] = {10, 10, 20, 403};
//     sort(arr, arr + 4);
//     for (int i : arr)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     sort(arr, arr + 4, greater<int>());
//     for (int i : arr)
//     {
//         cout << i << " ";
//     }
// }

// For Vetcors
int main()
{
    vector<int> v = {2, 5, 6, 4, 1};
    sort(v.begin(), v.end());
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    sort(v.begin(), v.end(), greater<int>());
    for (int i : v)
    {
        cout << i << " ";
    }
}