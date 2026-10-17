# Edit Distance

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given two strings  **s1**  and  **s2.** Return the minimum number of operations required to convert s1 to s2.
The possible operations are permitted:

- Insert a character at any position of the string.
- Remove any character from the string.
- Replace any character from the string with any other character.

**Examples:
**

```
Input: s1 = "geek", s2 = "gesek"
Output: 1
Explanation: One operation is required, inserting 's' between two 'e' in s1.
```

```
Input: s1 = "gfg", s2 = "gfg"
Output: 0
Explanation: Both strings are same.

```

```
Input: s1 = "abcd", s2 = "bcfe"
Output: 3
Explanation: We can convert s1 into s2 by removing ‘a’, replacing ‘d’ with ‘f’ and inserting ‘e’ at the end. 
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-17T06:16:06.136Z  

```cpp
class Solution {
public:
    int editDistance(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        // Convert s1 prefix to an empty string
        for (int i = 0; i <= n; i++) {
            dp[i][0] = i;
        }

        // Convert an empty string to s2 prefix
        for (int j = 0; j <= m; j++) {
            dp[0][j] = j;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s1[i - 1] == s2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1];
                } else {
                    dp[i][j] = 1 + min({
                        dp[i - 1][j],     // Delete
                        dp[i][j - 1],     // Insert
                        dp[i - 1][j - 1]  // Replace
                    });
                }
            }
        }

        return dp[n][m];
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/edit-distance3702/1)