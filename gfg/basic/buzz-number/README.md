# Buzz Number

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

A number  **n**  is said to be a  **Buzz Number**  if it ends with  **7**  OR is divisible by  **7**. 
The task is to check whether the given number is Buzz number or not. Return  **true**  if n is a Buzz Number else return  **false**.**Examples:
**

```
Input: n = 63
Output: true
Explanation: 63 is divisible by 7, one of the condition is satisfied.
```

```
Input: n = 72
Output: false
Explanation: 72 % 7 != 0, 72 is neither divisible by 7 nor it ends with 7 so it is not a Buzz Number.
```

**Constraints :
**0 <= n <= 109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T10:59:53.611Z  

```cpp
class Solution {
  public:
    bool isBuzz(int n) {
        //  code here
        
        return(n%7 ==0 || n%10 == 7);
           
        
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/buzz-number/1)