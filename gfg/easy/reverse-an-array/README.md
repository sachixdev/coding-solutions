# Reverse an Array

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an array of integers  **arr[]**. You have to  **reverse**  the given array.

 **Note:** Modify the array in place.

**Examples:
**

```
Input: arr = [1, 4, 3, 2, 6, 5]
Output: [5, 6, 2, 3, 4, 1]
Explanation: The elements of the array are [1, 4, 3, 2, 6, 5]. After reversing the array, the first element goes to the last position, the second element goes to the second last position and so on. Hence, the answer is [5, 6, 2, 3, 4, 1].
```

```
Input: arr = [4, 5, 2]
Output: [2, 5, 4]
Explanation: The elements of the array are [4, 5, 2]. The reversed array will be [2, 5, 4].

```

```
Input: arr = [1]
Output: [1]
Explanation: The array has only single element, hence the reversed array is same as the original.
```

**Constraints:
**1 ≤ arr.size() ≤ 105
0 ≤ arr[i] ≤ 105

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-11T10:55:24.355Z  

```cpp
class Solution {
public:
    void reverseArray(vector<int> &arr) {
        int left = 0;
        int right = arr.size() - 1;

        while (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/reverse-an-array/1)