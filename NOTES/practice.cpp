#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++
int tbl[256];
class Solution
{
public:
    // n: input to count the number of set bits
    // Function to return sum of count of set bits in the integers from 1 to n.
    void intinalize(int n)
    {
        tbl[0] = 0;
        for (int i = 1; i < 256; i++)
        {
            tbl[i] = tbl[i & (i - 1)] + 1;
        }
    }

    int countSetBits(int n)
    {

        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            int k = tbl[i & 255] + tbl[(i >> 8) & 255] + tbl[(i >> 16) & 255] + tbl[(i >> 24)];
            count += k;
        }
        return count;
        // Your logic here
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin >> t;   // input testcases
    while (t--) // while testcases exist
    {
        int n;
        cin >> n; // input n
        Solution ob;
        cout << ob.countSetBits(n) << endl; // print the answer

        cout << "~" << "\n";
    }
    return 0;
}
