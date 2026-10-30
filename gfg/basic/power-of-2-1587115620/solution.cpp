class Solution {
public:
    bool isPowerofTwo(int n) {
        // Powers of 2 must be strictly greater than 0
        if (n <= 0) return false;

        // Bitwise trick: n & (n - 1) removes the lowest set bit
        return (n & (n - 1)) == 0;
    }
};