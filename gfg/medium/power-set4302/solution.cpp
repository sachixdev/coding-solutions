#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    void generateSubsequences(int index, string &s, string current, vector<string> &result) {
        if (index == s.length()) {
            result.push_back(current);
            return;
        }

        // Include the character at the current index
        generateSubsequences(index + 1, s, current + s[index], result);

        // Exclude the character at the current index
        generateSubsequences(index + 1, s, current, result);
    }

    vector<string> powerSet(string &s) {
        vector<string> result;
        generateSubsequences(0, s, "", result);

        // Sort to ensure the output is in lexicographical order
        sort(result.begin(), result.end());

        return result;
    }
};