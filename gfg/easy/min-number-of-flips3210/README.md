# Min Number of Flips

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a binary string  **s** of length n. We need to make this string a sequence of alternate characters by flipping some of the bits, our goal is to minimize the number of bits to be flipped.

 **Examples:** 

```
Input: s = "001"
Output: 1
Explanation: We can flip the 0th bit to 1 to have "101".

```

```
Input: s = "0001010111" 
Output: 2
Explanation: We can flip the 1st and 8th bit. After this we have "0101010101"

```

 **Constraints:** 
1 ≤ |s| ≤ 105

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-17T06:31:19.779Z  

```cpp
class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        int flips1 = 0, flips2 = 0;

        for (int i = 0; i < n; i++) {
            char expected1 = (i % 2 == 0) ? '0' : '1';
            char expected2 = (i % 2 == 0) ? '1' : '0';

            if (s[i] != expected1)
                flips1++;

            if (s[i] != expected2)
                flips2++;
        }

        return min(flips1, flips2);
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/min-number-of-flips3210/1)