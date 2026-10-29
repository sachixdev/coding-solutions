class Solution {
public:
    // Helper function to count trailing zeroes in x!
    bool check(int x, int n) {
        int temp = x;
        int count = 0;
        int f = 5;

        while (f <= temp) {
            count += temp / f;
            f *= 5;
        }

        return count >= n;
    }

    int findNum(int n) {
        // If n is 1, answer is 5
        if (n == 1) return 5;

        int low = 0;
        int high = 5 * n;
        int ans = low;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (check(mid, n)) {
                ans = mid;
                high = mid - 1; // Try to find a smaller valid number
            } else {
                low = mid + 1;  // Increase mid to get more zeroes
            }
        }

        return ans;
    }
};