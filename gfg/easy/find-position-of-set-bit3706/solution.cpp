class Solution {
  public:
    int findPosition(int n) {
        // Base case: 0 or negative numbers have no valid single set bit
        if (n <= 0) return -1;

        // Check if n has more than one set bit using bitwise AND
        if ((n & (n - 1)) != 0) return -1;

        // Count position (1-based index from LSB)
        int count = 0;
        while (n > 0) {
            count++;
            n >>= 1;
        }

        return count;
    }
};