class Solution {
  public:

    int sumSquareDigits(int n) {
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        return sum;
    }

    bool reachesOne(int n) {
        unordered_set<int> visited;

        while (n != 1) {
            if (visited.count(n))
                return false; // cycle detected

            visited.insert(n);
            n = sumSquareDigits(n);
        }

        return true;
    }
};