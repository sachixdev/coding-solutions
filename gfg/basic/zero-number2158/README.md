# Duck Number

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

A  **Duck**  number is a positive number which has zeroes present in it, For example, 3210, 8050896, 70709 are all Duck numbers. A number with only leading 0s is not considered as Duck Number. For example, numbers like 035 or 0012 are not considered as Duck Numbers.
The task is to check whether the given number  **num**  is a  **Duck**  number or not.

 **Examples:** 

```
Input: num = 707069
Output: YES
Explanation: 707069 contains a non-leading 0.
```

```
Input: num = 02364
Output: NO
Explanation: Contains leading 0.
```

 **Constraints :** 
1 ≤ Length of num ≤ 104

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-10T08:24:04.006Z  

```cpp
bool check_duck(string num) {
    if (num[0] == '0') {
        return false;   // Leading zero -> not a Duck number
    }

    for (int i = 1; i < num.length(); i++) {
        if (num[i] == '0') {
            return true;   // Zero found after first digit
        }
    }

    return false;   // No zero found
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/zero-number2158/1)