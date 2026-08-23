# Pronic Number

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given an integer  **n**, find all Pronic Numbers less than or equal to n. A Pronic Number is a number that can be expressed as the product of two consecutive integers, i.e., i × (i + 1) for some non-negative integer i. Return all such Pronic Numbers in increasing order.

 **Examples:** 

```
Input: n = 6
Output: 0 2 6
Explanation: 0 is the product of 0 and 1. 2 is the product of 1 and 2. 6 is the product of 2 and 3.

```

```
Input: n = 56
Output: 0 2 6 12 20 30 42 56
Explanation: 
0 is the product of 0 and 1. 
2 is the product of 1 and 2. 
6 is the product of 2 and 3. 
12 is the product of 3 and 4. and so on.
```

 **Constraints:** 
0 ≤ n ≤ 109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-23T19:05:36.194Z  

```cpp
class Solution {
  public:
    vector<int> pronicNumbers(int n) {
        vector<int> ans;

        for (long long i = 0; i * (i + 1) <= n; i++) {
            ans.push_back(i * (i + 1));
        }

        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/pronic-number0729/1)