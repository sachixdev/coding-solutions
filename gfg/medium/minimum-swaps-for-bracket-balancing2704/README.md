# Minimum Swaps for Bracket Balancing

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a string  **s**  of  **2*n**  characters consisting of  **n**  ‘ **[** ‘ brackets and  **n**  ‘ **]** ’ brackets. A string is considered  **balanced**  if it can be represented in the form  **a[b]**  where  **a**  and  **b**  are balanced strings. We can make an unbalanced string balanced by swapping  **adjacent**  characters. Calculate the  **minimum number of swaps**  necessary to make a string balanced.
Note - Strings  **a** and  **b**  can be  **empty**.

 **Examples :** 

```
Input: s = "[]][]["
Output: 2
Explanation: First swap: Position 3 and 4 [][]][, Second swap: Position 5 and 6 [][][]

```

```
Input: s = "[][]"
Output : 0 
Explanation: String is already balanced.

```

```
Input: s = "[[[][][]]]"
Output: 0 
```

**Constraints:
**1<= s.size() <=105

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-27T14:34:07.969Z  

```cpp
class Solution {
  public:
    int minimumNumberOfSwaps(string& s) {
        long long swaps = 0;
        int leftCount = 0, rightCount = 0;
        int imbalance = 0;

        for(char ch : s) {
            if(ch == '[') {
                leftCount++;

                if(imbalance > 0) {
                    swaps += imbalance;
                    imbalance--;
                }
            }
            else { // ch == ']'
                rightCount++;
                imbalance = rightCount - leftCount;
            }
        }

        return swaps;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/minimum-swaps-for-bracket-balancing2704/1)