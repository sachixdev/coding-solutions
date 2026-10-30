# Bit Difference

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given two numbers  **a**  and  **b**. The task is to count the number of bits needed to be flipped to convert a to b.
 **Note :**  flipping of bit means inverting its value -- changing 1 to 0 and 0 to 1

 **Examples**  **:** 

```
Input: a = 10, b = 20
Output: 4
Explanation: a  = 01010, b  = 10100, As we can see, the bits of A that need to be flipped are 01010. If we flip these bits, we get 10100, which is B.

```

```
Input: a = 20, b = 25
Output: 3
Explanation: a  = 10100, b  = 11001, As we can see, the bits of A that need to be flipped are 10100. If we flip these bits, we get 11001, which is B.
```

 **Constraints:** 
1 ≤ a, b ≤ 106

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T03:47:06.687Z  

```cpp
class Solution {
  public:
    int countBitsFlip(int a, int b) {
        // XOR gives set bits where a and b differ
        int xorVal = a ^ b;

        // Count the number of set bits
        int count = 0;
        while (xorVal > 0) {
            xorVal = xorVal & (xorVal - 1); // Clears the lowest set bit
            count++;
        }

        return count;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1)