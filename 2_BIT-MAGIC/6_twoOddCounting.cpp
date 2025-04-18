#include <iostream>
#include <vector>
using namespace std;

// Naive Approach(O(n^2))
// void TwoODD(vector<int> &a, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (a[i] == a[j])
//                 count++;
//         }
//         if (count == 1)
//             cout << a[i] << " ";
//     }
// }

// Best Approach
void TwoODD(vector<int> &v, int n)
{
    int x = v[0];
    for (int i = 1; i < n; i++)
        x = v[i] ^ x;
    int k = x & (~(x - 1));
    int res1 = 0, res2 = 0;
    for (int i = 0; i < n; i++)
    {
        if ((v[i] & k) == 0)
            res1 = res1 ^ v[i];
        else
            res2 = res2 ^ v[i];
    }
    cout << res1 << " " << res2 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        TwoODD(a, n);
    }
}