# 4 Sum - All Quadruples

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array  **arr[]**  of integers and another integer  **target**. You have to find all  **unique** quadruples from the given array whose  **sum** is equal to the given  **target**.

 **Note:**  All the quadruples should be internally sorted, i.e for any quadruple [q1, q2, q3, q4] it should be : q1 ≤ q2 ≤ q3 ≤ q4.

 **Examples :** 

```
Input: arr[] = [0, 0, 2, 1, 1], target = 3
Output: [[0, 0, 1, 2]]
Explanation: Sum of 0, 0, 1, 2 is equal to 3.

```

```
Input: arr[] = [10, 2, 3, 4, 5, 7, 8], target = 23
Output: [[2, 3, 8, 10], [2, 4, 7, 10], [3, 5, 7, 8]] 
Explanation: Sum of [2, 3, 8, 10] is 23, sum of [2, 4, 7, 10] is 23 and sum of [3, 5, 7, 8] is also 23.
```

```
Input: arr[] = [0, 0, 2, 1, 1], target = 2
Output: [[0, 0, 1, 1]]
Explanation: Sum of [0, 0, 1, 1] is equal to 2.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T04:24:41.671Z  

```cpp
class Solution {
  public:
    vector<vector<int>> fourSum(vector<int> &arr, int target) {
        vector<vector<int>> ans;
        int n = arr.size();

        // Step 1: Sort the array
        sort(arr.begin(), arr.end());

        // Step 2: Fix the first element
        for (int i = 0; i < n - 3; i++) {
            // Skip duplicates for the first element
            if (i > 0 && arr[i] == arr[i - 1]) continue;

            // Step 3: Fix the second element
            for (int j = i + 1; j < n - 2; j++) {
                // Skip duplicates for the second element
                if (j > i + 1 && arr[j] == arr[j - 1]) continue;

                int left = j + 1;
                int right = n - 1;

                // Step 4: Two-pointer technique for the remaining two elements
                while (left < right) {
                    long long sum = (long long)arr[i] + arr[j] + arr[left] + arr[right];

                    if (sum == target) {
                        ans.push_back({arr[i], arr[j], arr[left], arr[right]});

                        // Skip duplicates for the third element
                        while (left < right && arr[left] == arr[left + 1]) left++;
                        // Skip duplicates for the fourth element
                        while (left < right && arr[right] == arr[right - 1]) right--;

                        left++;
                        right--;
                    } else if (sum < target) {
                        left++;
                    } else {
                        right--;
                    }
                }
            }
        }

        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1)