# Minimum Bracket Reversals to Balance

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string  **s**  consisting of only opening and closing curly brackets **'{'**  and **'}',**  find out the minimum reversals required to convert the string into a balanced expression. A reversal means changing  **'{'**  to  **'}'**  or vice-versa.

 **Examples:** 

```
Input: s = "}{{}}{{{"
Output: 3
Explanation: One way to balance is:
"{{{}}{}}". There is no balanced sequence
that can be formed in lesser reversals.

```

```
Input: s = "{{}{{{}{{}}{{"
Output: -1
Explanation: There's no way we can balance
this sequence of braces.

```

 **Constraints:** 
1 ≤ |s| ≤ 105

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-17T06:22:37.588Z  

```cpp
class Solution {
public:
    int countMinReversals(string s) {
        int n = s.size();

        // Odd length cannot be balanced
        if (n % 2 != 0)
            return -1;

        int open = 0, close = 0;

        for (char ch : s) {
            if (ch == '{') {
                open++;
            } else {
                if (open > 0)
                    open--;
                else
                    close++;
            }
        }

        return (open + 1) / 2 + (close + 1) / 2;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/count-the-reversals0401/1)