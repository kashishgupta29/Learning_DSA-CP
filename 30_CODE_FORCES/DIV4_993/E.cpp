#include <iostream>
#include <vector>
using namespace std;

vector<long long> precomputePowers(long long k, long long limit)
{
    vector<long long> powers;
    long long value = 1;
    while (value <= limit)
    {
        powers.push_back(value);
        if (value > limit / k)
            break;
        value *= k;
    }
    return powers;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        vector<long long> powers = precomputePowers(k, r2);

        long long count = 0;

        for (long long x = l1; x <= r1; ++x)
        {

            for (long long power : powers)
            {
                long long y = x * power;
                if (y >= l2 && y <= r2)
                {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
