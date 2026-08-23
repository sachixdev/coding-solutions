# Twisted Prime Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a number  **n**. Check whether  **n**  is a Twisted Prime number or not. A number is called Twisted Prime if it is a prime and its reverse is also a prime.

 **Examples :** 

```
Input: n = 97
Output: true
Explanation: 97 is a prime number. Its reverse 79 is also a prime number. Thus 97 is a  twisted Prime and so, answer is true.
```

```
Input: n = 43
Output: false
Explanation: 43 is a prime number but its reverse 34 is not a prime. So, 43 is not a twisted prime and thus, answer is false.
```

 **Constraints:** 
1 ≤ n ≤ 109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-23T19:09:34.518Z  

```cpp
class Solution {
  public:
    bool isTwistedPrime(int n) {
        if (n <= 1)
            return false;

        // Check if n is prime
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }

        // Reverse n
        int rev = 0, temp = n;
        while (temp > 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }

        // Check if reverse is prime
        if (rev <= 1)
            return false;

        for (int i = 2; i * i <= rev; i++) {
            if (rev % i == 0)
                return false;
        }

        return true;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/twisted-prime-number0500/1)