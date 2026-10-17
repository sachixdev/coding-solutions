# Roman to Integer

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string  **s**  in Roman number format, your task is to  **convert**  it to an  **integer**. Various symbols and their values are given below.
 **Note:** I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000

 **Examples:** 

```
Input: s = "IX"
Output: 9
Explanation: IX is a Roman symbol which represents 10 – 1 = 9.
```

```
Input: s = "XL"
Output: 40
Explanation: XL is a Roman symbol which represents 50 – 10 = 40.
```

```
Input: s = "MCMIV"
Output: 1904
Explanation: M is 1000, CM is 1000 – 100 = 900, and IV is 4. So we have total as 1000 + 900 + 4 = 1904.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-17T06:28:21.980Z  

```cpp
class Solution {
public:
    int romanToInteger(string& s) {
        int ans = 0;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            int curr = value(s[i]);

            if (i + 1 < n && curr < value(s[i + 1])) {
                ans -= curr;
            } else {
                ans += curr;
            }
        }

        return ans;
    }

    int value(char ch) {
        switch (ch) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1)