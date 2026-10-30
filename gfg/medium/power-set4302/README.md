# All Subsequences of String

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string  **s**, generate all possible subsequences of the string (including the empty subsequence) and return them in lexicographical order.

A subsequence is obtained by deleting zero or more characters from the string without changing the relative order of the remaining characters.

 **Examples:** 

```
Input : s = "abc"
Output: ["", "a", "ab", "abc", "ac", "b", "bc", "c"]
Explanation: There are a total of 8 non-empty subsequences for the given string. 
```

```
Input: s = "aa"
Output: ["", "a", "a", "aa"]
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T03:50:09.668Z  

```cpp
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
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/power-set4302/1)