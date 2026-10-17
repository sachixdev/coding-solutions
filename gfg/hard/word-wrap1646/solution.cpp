class Solution {
public:
    int solveWordWrap(vector<int> arr, int k) {
        int n = arr.size();
        vector<int> dp(n + 1, 0);

        // Calculate minimum cost from right to left
        for (int i = n - 1; i >= 0; i--) {
            int len = 0;
            int best = INT_MAX;

            for (int j = i; j < n; j++) {
                len += arr[j];

                // Include spaces between words
                int used = len + (j - i);

                if (used > k)
                    break;

                // Last line has zero cost
                int cost = (j == n - 1)
                               ? 0
                               : (k - used) * (k - used);

                best = min(best, cost + dp[j + 1]);
            }

            dp[i] = best;
        }

        return dp[0];
    }
};