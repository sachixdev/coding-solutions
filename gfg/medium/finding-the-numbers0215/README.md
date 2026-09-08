# Unique Number II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array  **arr[]**  containing 2 *n + 2 positive numbers, out of which 2* n numbers exist in pairs whereas only two number occur exactly once and are distinct. Find the other two numbers. Return the answer in increasing order.

 **Examples:** 

```
Input: arr[] = [1, 2, 3, 2, 1, 4]
Output: [3, 4] 
Explanation: 3 and 4 occur exactly once.

```

```
Input: arr[] = [2, 1, 3, 2]
Output: [1, 3]
Explanation: 1 and 3 occur exactly once.

```

```
Input: arr[] = [2, 1, 3, 3]
Output: [1, 2]
Explanation: 1 and 2 occur exactly once.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-08T10:42:07.517Z  

```cpp
class Solution {
public:
    vector<int> singleNum(vector<int>& arr) {

        int xorAll = 0;

        // XOR of all elements
        for(int num : arr)
            xorAll ^= num;

        // Rightmost set bit
        int setBit = xorAll & (-xorAll);

        int x = 0, y = 0;

        // Divide into two groups
        for(int num : arr) {

            if(num & setBit)
                x ^= num;
            else
                y ^= num;
        }

        if(x > y)
            swap(x, y);

        return {x, y};
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1)