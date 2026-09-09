# Longest Consecutive Subsequence

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array  **arr[]**  of non-negative integers. Find the  **length**  of the longest sub-sequence such that elements in the subsequence are consecutive integers, the **consecutive numbers**  can be in  **any order.** 

 **Examples:** 

```
Input: arr[] = [2, 6, 1, 9, 4, 5, 3]
Output: 6
Explanation: The consecutive numbers here are 1, 2, 3, 4, 5, 6. These 6 numbers form the longest consecutive subsquence.
```

```
Input: arr[] = [1, 9, 3, 10, 4, 20, 2]
Output: 4
Explanation: 1, 2, 3, 4 is the longest consecutive subsequence.
```

```
Input: arr[] = [15, 13, 12, 14, 11, 10, 9]
Output: 7
Explanation: The longest consecutive subsequence is 9, 10, 11, 12, 13, 14, 15, which has a length of 7.

```

 **Constraints:** 
1 ≤ arr.size() ≤ 105
0 ≤ arr[i] ≤ 105

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-09T18:54:37.114Z  

```cpp
class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {

        unordered_set<int> st(arr.begin(), arr.end());

        int longest = 0;

        for (int num : st) {

            // Start of a sequence
            if (st.find(num - 1) == st.end()) {

                int currentNum = num;
                int length = 1;

                while (st.find(currentNum + 1) != st.end()) {
                    currentNum++;
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1)