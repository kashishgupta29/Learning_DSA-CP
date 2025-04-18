#include <iostream>
#include <algorithm>
using namespace std;

// Using recursion
bool ispalin(string &str, int start, int end)
{
    if (start >= end)
        return true;
    return (str[start] == str[end]) && ispalin(str, start + 1, end - 1);
}
int main()
{
    string s;
    cin >> s;
    cout << ispalin(s, 0, s.length() - 1);
}
// int main()
// {
//     string s;
//     cin >> s;
//     string a = s;
//     reverse(s.begin(), s.end());
//     if (a == s)
//         cout << "YES, PALINDROME" << endl;
//     else
//         cout << "NO, NOT PALINDROME" << endl;
// }