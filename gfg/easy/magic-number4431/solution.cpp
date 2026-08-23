class Solution {
  public:
    int nthMagicNo(int n) {
        int ans = 0;
        int power = 5;

        while (n > 0) {
            if (n & 1)
                ans += power;

            power *= 5;
            n >>= 1;
        }

        return ans;
    }
};