#include <string>
using namespace std;

class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int a_len = a.size();
        int b_len = b.size();
        int min_repeats = (b_len + a_len - 1) / a_len; // Minimum repeats required

        // Repeat `a` enough times
        string repeatedA = a;
        for (int i = 1; i <= min_repeats + 1; ++i) {
            // Check if `b` is a substring of the repeated string
            if (repeatedA.find(b) != string::npos) {
                return i;
            }
            // Append `a` to the repeated string
            repeatedA += a;
        }

        // If `b` was not found in the repeated string, return -1
        return -1;
    }
};
