#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

// Helper function to calculate the shift difference in cyclic order
int getShift(char from, char to)
{
    int shift = to - from;
    if (shift < 0)
        shift += 26; // Wrap around in cyclic order
    return shift;
}

bool canTransform(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;

    unordered_map<char, int> shiftMap; // Map to store the consistent shift for each character

    for (int i = 0; i < s1.length(); i++)
    {
        char from = s1[i], to = s2[i];
        int shiftForward = getShift(from, to);  // Shift to go forward
        int shiftBackward = getShift(to, from); // Shift to go backward

        // Check if the shift has been set before
        if (shiftMap.count(from))
        {
            if (shiftMap[from] != shiftForward && shiftMap[from] != shiftBackward)
            {
                return false; // Inconsistent shift found
            }
        }
        else
        {
            // Assign the first valid shift
            shiftMap[from] = shiftForward;
        }
    }

    return true;
}

int main()
{
    string s1, s2;

    // Example 1
    s1 = "geeksforgeeks";
    s2 = "geeksforgeeks";
    cout << (canTransform(s1, s2) ? "true" : "false") << endl;

    // Example 2
    s1 = "abab";
    s2 = "fdfz";
    cout << (canTransform(s1, s2) ? "true" : "false") << endl;

    // Example 3
    s1 = "abab";
    s2 = "adfz";
    cout << (canTransform(s1, s2) ? "true" : "false") << endl;
}