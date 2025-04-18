#include <iostream>
using namespace std;
class Solution
{
public:
    long long minArea(string &path, int fr, int fc)
    {
        int n = path.length();
        int rec = (fr + 1) * (fc + 1);
        int up = 0;
        int down = 0;
        int right = 0;
        int left = 0;
        for (int i = 0; i < n; i++)
        {
            if (path[i] == 'D')
                down++;
            else if (path[i] == 'U')
                up++;
            else if (path[i] == 'R')
                right++;
            else
                left++;
        }
        int a = down - up;
        int b = right - left;
        if (a >= fr && b >= fc)
            return rec;
        else if ((fr == 0 && b >= fc) || (a >= fr && fc == 0))
            return rec;
        else
            return -1;

        // code here
    }
};

int main()
{
    Solution s;
    string path;
    int fr, fc;
    cin >> path;
    cin >> fr >> fc;
    cout << s.minArea(path, fr, fc);
}