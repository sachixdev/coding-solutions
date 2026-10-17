class Solution {
public:
    long long int countPS(string s) {
        int n = s.size();
        vector<vector<long long>> dp(n, vector<long long>(n, 0));

        // Every single character is a palindrome
        for (int i = 0; i < n; i++) {
            dp[i][i] = 1;
        }

        for (int len = 2; len <= n; len++) {
            for (int i = 0; i + len <= n; i++) {
                int j = i + len - 1;

                if (s[i] == s[j]) {
                    dp[i][j] = dp[i + 1][j]
                             + dp[i][j - 1] + 1;
                } else {
                    dp[i][j] = dp[i + 1][j]
                             + dp[i][j - 1]
                             - dp[i + 1][j - 1];
                }
            }
        }

        return dp[0][n - 1];
    }
};