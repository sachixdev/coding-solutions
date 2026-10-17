# Count Palindromic Subsequences

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string  **s**, you have to find the number of palindromic subsequences (need not necessarily be distinct) present in the string s. 

 **Examples:** 

```
Input: s = "abcd"
Output: 4
Explanation: palindromic subsequence are : 'a','b', 'c','d'
```

```
Input: s = "aab"
Output: 4
Explanation: palindromic subsequence are : 'a', 'a', 'b', 'aa'

```

```
Input: s = "b"
Output: 1
Explanation: palindromic subsequence are : 'b'
```

 **Constraints:** 
1<= s.size() <=30

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-17T06:25:21.060Z  

```cpp
class Solution {
public:
    long long int countPS(string s) {
        int n = s.size();
        vector<vector<long long>> dp(n, vector<long long>(n, 0));

        // Every single character is a palindrome
        for (int i = 0; i < n; i++) {
            dp[i][i] = 1;
        }

        for (int len = 2; len <= n; len++) {
            for (int i = 0; i + len <= n; i++) {
                int j = i + len - 1;

                if (s[i] == s[j]) {
                    dp[i][j] = dp[i + 1][j]
                             + dp[i][j - 1] + 1;
                } else {
                    dp[i][j] = dp[i + 1][j]
                             + dp[i][j - 1]
                             - dp[i + 1][j - 1];
                }
            }
        }

        return dp[0][n - 1];
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/count-palindromic-subsequences/1)