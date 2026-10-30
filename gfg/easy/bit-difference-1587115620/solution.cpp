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