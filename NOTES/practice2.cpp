#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

// static inline void fastIO()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
// }

int main()
{
    // fastIO();
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        vector<int> P(N);
        for (int i = 0; i < N; i++)
        {
            cin >> P[i];
        }
        vector<int> B(N), C(N);

        for (int i = 0; i < N; i++)
        {
            B[i] = __builtin_popcount(P[i]);
            C[i] = __builtin_popcount(i + 1);
        }

        unordered_map<int, vector<int>> posO;
        unordered_map<int, vector<int>> posT;

        posO.reserve(N);
        posT.reserve(N);
        posO.max_load_factor(0.7f);
        posT.max_load_factor(0.7f);

        for (int i = 0; i < N; i++)
        {
            posO[B[i]].push_back(i);
            posT[C[i]].push_back(i);
        }
        bool possible = true;
        if (posO.size() != posT.size())
        {
            possible = false;
        }

        if (possible)
        {
            for (auto &kv : posO)
            {
                int bitCountVal = kv.first;
                auto &positionsOrig = kv.second;

                // If posTarget does not have the same bitCountVal, mismatch
                if (!posT.count(bitCountVal))
                {
                    possible = false;
                    break;
                }

                auto &positionsTgt = posT[bitCountVal];

                // Sort both lists so we can compare them 1:1
                sort(positionsOrig.begin(), positionsOrig.end());
                sort(positionsTgt.begin(), positionsTgt.end());

                if (positionsOrig.size() != positionsTgt.size())
                {
                    possible = false;
                    break;
                }
                // Compare element by element
                for (size_t i = 0; i < positionsOrig.size(); i++)
                {
                    if (positionsOrig[i] != positionsTgt[i])
                    {
                        possible = false;
                        break;
                    }
                }

                if (!possible)
                    break;
            }
        }

        if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
