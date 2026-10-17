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