# Sort 0s, 1s and 2s

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array  **arr[]**  containing only  **0s, 1s, and 2s.**  Sort the array in ascending order.
 **Note:**  You need to solve this problem without utilizing the built-in sort function.

 **Examples:** 

```
Input: arr[] = [0, 1, 2, 0, 1, 2]
Output: [0, 0, 1, 1, 2, 2]
Explanation: 0s, 1s and 2s are segregated into ascending order.
```

```
Input: arr[] = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1]
Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2]
Explanation: 0s, 1s and 2s are segregated into ascending order.
```

 **Follow up:**  Could you come up with a one-pass algorithm using only constant extra space?

 **Constraints:** 
1 ≤ arr.size() ≤ 105
0 ≤ arr[i] ≤ 2

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-11T10:16:04.295Z  

```cpp
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int low = 0, mid = 0, high = arr.size()-1;
        while(mid <= high){
            if(arr[mid] == 0)
            {
                swap(arr[low],arr[mid]);
                low++;
                mid++;
            }
            
            else if (arr[mid] == 1)
            {
                mid++;
                
            }
            
            else
            {
                swap(arr[mid],arr[high]);
                high--;
            }
        }
        
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1)