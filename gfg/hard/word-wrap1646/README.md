# Word Wrap

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given an array  **arr[]**, where arr[i] denotes the number of characters in one word.

- Given a number k which is limit on the number of characters that can be put in one line (line width).
- Put line breaks in the given sequence such that the lines are printed neatly. Assume that the length of each word is smaller than the line width.
- When line breaks are inserted there is a possibility that extra spaces are present in each line. The extra spaces include spaces put at the end of every line except the last one. 

You need to minimize the total cost where

Total Cost = Sum of cost of all lines

Cost of line is = (Number of extra spaces in the line)2.

 **Examples:** 

```
Input: arr[] = [3,2,2,5], k = 6
Output: 10
Explanation: Given a line can have 6 characters,
Line number 1: From word no. 1 to 1
Line number 2: From word no. 2 to 3
Line number 3: From word no. 4 to 4
So total cost = (6-3)2 + (6-2-2-1)2 = 32+12 = 10. As in the first line word length = 3 thus extra spaces = 6 - 3 = 3 and in the second line there are two word of length 2 and there already 1 space between two word thus extra spaces = 6 - 2 -2 -1 = 1. As mentioned in the problem description there will be no extra spaces in the last line. Placing first and second word in first line and third word on second line would take a cost of 02 + 42 = 16 (zero spaces on first line and 6-2 = 4 spaces on second), which isn't the minimum possible cost.

```

```
Input: arr[] = [3,2,2], k = 4
Output: 5
Explanation: Given a line can have 4 characters,
Line number 1: From word no. 1 to 1
Line number 2: From word no. 2 to 2
Line number 3: From word no. 3 to 3
Same explanation as above total cost = (4 - 3)2 + (4 - 2)2 = 5.  
```

 **Constraints:** 
1 ≤ arr.size() ≤ 500
1 ≤ arr[i] ≤ 1000
max(arr[i]) ≤ k ≤ 2000

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-17T06:15:02.305Z  

```cpp
class Solution {
public:
    int solveWordWrap(vector<int> arr, int k) {
        int n = arr.size();
        vector<int> dp(n + 1, 0);

        // Calculate minimum cost from right to left
        for (int i = n - 1; i >= 0; i--) {
            int len = 0;
            int best = INT_MAX;

            for (int j = i; j < n; j++) {
                len += arr[j];

                // Include spaces between words
                int used = len + (j - i);

                if (used > k)
                    break;

                // Last line has zero cost
                int cost = (j == n - 1)
                               ? 0
                               : (k - used) * (k - used);

                best = min(best, cost + dp[j + 1]);
            }

            dp[i] = best;
        }

        return dp[0];
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/word-wrap1646/1)