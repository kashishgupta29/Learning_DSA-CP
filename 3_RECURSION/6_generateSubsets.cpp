#include <iostream>
using namespace std;

void genSubsets(string s, string curr, int i)
{
    if (i == s.length())
    {
        cout << curr << endl;
        return;
    }
    genSubsets(s, curr, i + 1);
    genSubsets(s, curr + s[i], i + 1);
}
int main()
{
    string s, curr;
    int i;
    cin >> s;

    genSubsets(s, "", 0);
}
