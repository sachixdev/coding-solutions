# Count Set Bits

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a positive integer  **n**. Return the  **count** of set bits in its binary equivalent.

 **Examples:** 

```
Input: n = 6
Output: 2
Explanation: 

Binary representation is '110', so the count of the set bit is 2.
```

```
Input: n = 8
Output: 1
Explanation: 

Binary representation is '1000', so the count of the set bit is 1.

```

```
Input: n = 3
Output: 2
Explanation:

Binary representation is '11', so the count of the set bit is 2.
```

 **Constraints:** 
1 ≤ n ≤ 109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-08T10:41:15.966Z  

```cpp
class Solution {
public:
    int setBits(int n) {
        int count = 0;

        while (n) {
            n = n & (n - 1);
            count++;
        }

        return count;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/set-bits0143/1)