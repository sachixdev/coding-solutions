# Spy Number

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Your are given a number  **n** . The number is said to be a  **Spy number**  if the  **sum**  of all the digits is equal to the  **product** of all digits. Return  **true**  if number is  **Spy number**, else  **false**.

 **Examples:** 

```
Input: n = 1412
Output: true
Explanation: 
sum = (1 + 4 + 1 + 2) = 8
product = (1  *4*  1 * 2) = 8
since, sum == product, 1412 is Spy number
```

```
Input: n = 13
Output: false
Explanation: 
sum = (1 + 3) = 4
product = (1 * 3) = 3
since, sum != product, 13 is not a Spy number  
```

 **Constraints:** 
1 ≤ n ≤ 109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-23T19:11:47.416Z  

```cpp
class Solution {
  public:
    bool checkSpy(int n) {
        int sum = 0;
        int product = 1;

        while (n > 0) {
            int digit = n % 10;
            sum += digit;
            product *= digit;
            n /= 10;
        }

        return sum == product;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/spy-number/1)