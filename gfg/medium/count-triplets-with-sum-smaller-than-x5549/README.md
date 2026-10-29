# Triplets with Smaller Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array  **arr[]** of distinct integers and an integer  **sum**, count the number of unique triplets of elements whose sum is strictly less than sum. A triplet is identified only by the three elements it contains, so different permutations of the same three elements are counted as one triplet.

  Examples :  

```
Input: sum = 2, arr[] = [-2, 0, 1, 3]
Output:  2
Explanation: Triplets with sum less than 2 are (-2, 0, 1) and (-2, 0, 3). 

```

```
Input: sum = 12, arr[] = [5, 1, 3, 4, 7]
Output: 4
Explanation: Triplets with sum less than 12 are (1, 3, 4), (5, 1, 3), (1, 3, 7) and (5, 1, 4).
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T04:26:36.023Z  

```cpp
class Solution {
  public:
    int countTriplets(int sum, vector<int>& arr) {
        int n = arr.size();
        int count = 0;

        // Step 1: Sort the array
        sort(arr.begin(), arr.end());

        // Step 2: Fix the first element one by one
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            // Two-pointer approach for the remaining subarray
            while (left < right) {
                int currentSum = arr[i] + arr[left] + arr[right];

                if (currentSum < sum) {
                    // If arr[i] + arr[left] + arr[right] < sum, 
                    // then for all elements between left and right, 
                    // arr[i] + arr[left] + arr[k] will also be < sum.
                    count += (right - left);
                    left++;
                } else {
                    right--;
                }
            }
        }

        return count;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1)