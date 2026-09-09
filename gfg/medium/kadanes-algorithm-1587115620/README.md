# Kadane's Algorithm

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array  **arr[].**  You need to find the maximum sum of a subarray (containing at least one element) in the array  **arr[]**.

 **Examples:** 

```
Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
Output: 11
Explanation: The subarray [7, -1, 2, 3] has the largest sum 11.

```

```
Input: arr[] = [-2, -4]
Output: -2
Explanation: The subarray [-2] has the largest sum -2.
```

```
Input: arr[] = [5, 4, 1, 7, 8]
Output: 25
Explanation: The subarray [5, 4, 1, 7, 8] has the largest sum 25.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-09T18:27:08.728Z  

```cpp

class Solution {
   public:
     int maxSubarraySum(vector<int> &arr) {
         int currSum = arr[0];
         int maxSum = arr[0];

         for(int i = 1; i < arr.size(); i++) {
             currSum = max(arr[i], currSum + arr[i]);
             maxSum = max(maxSum, currSum);
         }

         return maxSum;
     }
 };
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1)