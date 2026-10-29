# Stickler Thief

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Stickler the thief wants to loot money from the houses arranged in a line. He cannot loot two consecutive houses and aims to maximize his total loot. Given an array,  **arr[]**  where arr[i] represents the amount of money in the i-th house. Find the maximum amount he can loot.

 **Examples:** 

```
Input: arr[] = [6, 7, 1, 3, 8, 2, 4]
Output: 19
Explanation: Maximum amount he can get by looting 1st, 3rd, 5th and 7th house, which is 6 + 1 + 8 + 4 = 19.
```

```
Input: arr[] = [5, 3, 4, 11, 2]
Output: 16
Explanation: Maximum amount he can get by looting 1st and 4th house, which is 5 + 11 = 16.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T04:25:44.621Z  

```cpp
class Solution {
  public:
    int findMaxSum(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return 0;
        if (n == 1) return arr[0];

        int prev2 = 0;        // Max sum excluding current and previous house
        int prev1 = arr[0];    // Max sum including up to previous house

        for (int i = 1; i < n; i++) {
            int pick = arr[i] + prev2; // Loot current house + max loot till (i-2)th house
            int notPick = prev1;       // Skip current house, keep max loot till (i-1)th house

            int curr = max(pick, notPick);
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1)