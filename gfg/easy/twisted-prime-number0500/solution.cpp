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
