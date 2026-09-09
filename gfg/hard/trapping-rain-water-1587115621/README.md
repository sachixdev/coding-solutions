# Trapping Rain Water

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given an array  **arr[]** with non-negative integers representing the height of blocks. If the width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 

 **Examples:** 

```
Input: arr[] = [3, 0, 1, 0, 4, 0, 2]
Output: 10
Explanation: Total water trapped = 0 + 3 + 2 + 3 + 0 + 2 + 0 = 10 units.

```

```
Input: arr[] = [3, 0, 2, 0, 4]
Output: 7
Explanation: Total water trapped = 0 + 3 + 1 + 3 + 0 = 7 units.

```

```
Input: arr[] = [1, 2, 3, 4]
Output: 0
Explanation: We cannot trap water as there is no height bound on both sides.
```

```
Input: arr[] = [2, 1, 5, 3, 1, 0, 4]
Output: 9
Explanation: Total water trapped = 0 + 1 + 0 + 1 + 3 + 4 + 0 = 9 units.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-09T19:01:05.848Z  

```cpp
class Solution {
  public:
    int maxWater(vector<int> &arr) {

        int left = 0;
        int right = arr.size() - 1;

        int leftMax = 0;
        int rightMax = 0;
        int water = 0;

        while (left <= right) {

            if (arr[left] <= arr[right]) {

                if (arr[left] >= leftMax) {
                    leftMax = arr[left];
                } else {
                    water += leftMax - arr[left];
                }

                left++;
            }
            else {

                if (arr[right] >= rightMax) {
                    rightMax = arr[right];
                } else {
                    water += rightMax - arr[right];
                }

                right--;
            }
        }

        return water;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1)