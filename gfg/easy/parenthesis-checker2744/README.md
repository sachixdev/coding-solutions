# Parenthesis Checker

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string  **s**, composed of different combinations of '(', ')', '{', '}', '[', ']'. Determine whether the Expression is  **balanced** or not.
An expression is balanced if:

- Each opening bracket has a corresponding closing bracket of the same type.
- Opening brackets must be closed in the correct order.

 **Examples :** 

```
Input: s = "[{()}]"
Output: true
Explanation: All the brackets are well-formed.
```

```
Input: s = "[()()]{}"
Output: true
Explanation: All the brackets are well-formed.

```

```
Input: s = "([]"
Output: false
Explanation: The expression is not balanced as there is a missing ')' at the end.

```

```
Input: s = "([{]})"
Output: false
Explanation: The expression is not balanced as there is a closing ']' before the closing '}'.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-17T06:18:07.647Z  

```cpp
class Solution {
public:
    bool isBalanced(string& s) {
        stack<char> st;

        for (char ch : s) {
            // Opening brackets
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            // Closing brackets
            else {
                if (st.empty()) {
                    return false;
                }

                char top = st.top();
                st.pop();

                if (ch == ')' && top != '(')
                    return false;

                if (ch == '}' && top != '{')
                    return false;

                if (ch == ']' && top != '[')
                    return false;
            }
        }

        // Balanced only if no opening brackets remain
        return st.empty();
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1)