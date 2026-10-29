# Smallest With At Least n Trailing 0s in Factorial

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer  **n**, find the smallest positive integer  **x**  such that the factorial of  **x**  (i.e.,  x!) contains at least n trailing zeroes.

 **Examples:** 

```
Input: n = 6
Output: 25
Explanation: 25! = 15511210043330985984000000, It ends with 6 trailing zeroes, which is the minimum required.
```

```
Input: n = 1
Output: 5
Explanation: 5! = 120, It ends with 1 trailing zero, which meets the requirement.

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T04:40:07.679Z  

```cpp
class Solution {
public:
    // Helper function to count trailing zeroes in x!
    bool check(int x, int n) {
        int temp = x;
        int count = 0;
        int f = 5;

        while (f <= temp) {
            count += temp / f;
            f *= 5;
        }

        return count >= n;
    }

    int findNum(int n) {
        // If n is 1, answer is 5
        if (n == 1) return 5;

        int low = 0;
        int high = 5 * n;
        int ans = low;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (check(mid, n)) {
                ans = mid;
                high = mid - 1; // Try to find a smaller valid number
            } else {
                low = mid + 1;  // Increase mid to get more zeroes
            }
        }

        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/smallest-factorial-number5929/1)