# Word Break Check

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a string **s**  and a list **dictionary[]**  of words. Your task is to find if the string s can be formed by concatenating one or more words from the dictionary[].

 **Note** : Any word of dictionary can be taken any number of times and in any order.

 **Examples :** 

```
Input: s = "ilike", dictionary[] = ["i", "like", "gfg"]
Output: true
Explanation: s can be breakdown as "i like".

```

```
Input: s = "ilikegfg", dictionary[] = ["i", "like", "man", "india", "gfg"]
Output: true
Explanation: s can be breakdown as "i like gfg".
```

```
Input: s = "ilikemangoes", dictionary[] = ["i", "like", "man", "india", "gfg"]
Output: false
Explanation: s cannot be formed using dictionary[] words.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-17T06:19:10.284Z  

```cpp
class Solution {
public:
    bool wordBreak(string &s, vector<string> &dictionary) {
        int n = s.size();

        unordered_set<string> dict(dictionary.begin(), dictionary.end());
        vector<bool> dp(n + 1, false);

        dp[0] = true;

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                if (dp[j] && dict.count(s.substr(j, i - j))) {
                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[n];
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/word-break1352/1)