#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(m);
        for (int i = 0; i < m; i++)
            cin >> a[i];
        vector<int> b(k);
        unordered_set<int> ques;
        for (int i = 0; i < k; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < k; i++)
        {
            ques.insert(b[i]);
        }
        if (n > m)
        {
            for (int i = 0; i < m; i++)
                cout << 0;
        }

        else
        {
            vector<int> r;
            for (int i = 0; i < m; i++)
            {
                if (ques.size() == n || ques.find(a[i]) == ques.end())
                    r.push_back(1);
                else
                    r.push_back(0);
            }
            for (int i = 0; i < r.size(); i++)
                cout << r[i];
        }
        cout << endl;
    }
}
