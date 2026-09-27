# Second Most Frequent Word

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a sequence of strings  **arr[]**, find and return the second highest frequency (count of occurrences) among all strings in the array.

 **Note:** 

- If all strings have the same frequency, return -1.
- If there is only one unique string in the array, return -1.
- If the array is empty, return -1.

 **Examples:** 

```
Input: arr[] = ["aaa", "bbb", "ccc", "bbb", "aaa", "aaa"]
Output: 2
Explanation: "bbb" is the second most occurring string with frequency 2. So the answer for this test case is 2.

```

```
Input: arr[] = ["aaa", "aaa", "aaa", "aaa", "aaa", "aaa"]
Output: -1
Explanation: There is only one unique string with frequency 6. So answer for this test case is -1.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-27T14:42:24.127Z  

```cpp
class Solution {
  public:
    int secFrequent(vector<string> &arr) {
        unordered_map<string, int> freq;

        // Count frequencies
        for (string &s : arr) {
            freq[s]++;
        }

        // If only one unique string
        if (freq.size() < 2) {
            return -1;
        }

        int first = 0, second = 0;

        for (auto &it : freq) {
            int f = it.second;

            if (f > first) {
                second = first;
                first = f;
            }
            else if (f > second && f < first) {
                second = f;
            }
        }

        return (second == 0) ? -1 : second;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/second-most-repeated-string-in-a-sequence0534/1)