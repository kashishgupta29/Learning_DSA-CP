#include <iostream>
using namespace std;
int main()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if (l2 < r1 && r2 >= l1)
        cout << max(l1, l2) << " " << min(r1, r2);
    else if (l2 == r1)
        cout << r1 << " " << r1;
    else
        cout << -1;
}