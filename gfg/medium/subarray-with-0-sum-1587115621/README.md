# Zero Sum Subarray

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers,  **arr[]**. Find if there is a subarray (of size at least one) with  **0** sum. Return true/false depending upon whether there is a subarray present with 0-sum or not. 

 **Examples:** 

```
Input: arr[] = [4, 2, -3, 1, 6]
Output: true
Explanation: 2, -3, 1 is the subarray with a sum of 0.
```

```
Input: arr = [4, 2, 0, 1, 6]
Output: true
Explanation: 0 is one of the elements in the array so there exist a subarray with sum 0.
```

```
Input: arr = [1, 2, -1]
Output: false
```

 **Constraints:** 
1 <= arr.size <= 105
-105 <= arr[i] <= 105

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-09T18:49:27.975Z  

```cpp
class Solution {
  public:
    bool subArrayExists(vector<int>& arr) {
        unordered_set<long long> st;

        long long prefixSum = 0;

        for (int num : arr) {
            prefixSum += num;

            // If prefix sum is 0
            if (prefixSum == 0)
                return true;

            // If same prefix sum seen before
            if (st.find(prefixSum) != st.end())
                return true;

            st.insert(prefixSum);
        }

        return false;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1)