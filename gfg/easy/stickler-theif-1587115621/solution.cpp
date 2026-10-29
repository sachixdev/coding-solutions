class Solution {
  public:
    int findMaxSum(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return 0;
        if (n == 1) return arr[0];

        int prev2 = 0;        // Max sum excluding current and previous house
        int prev1 = arr[0];    // Max sum including up to previous house

        for (int i = 1; i < n; i++) {
            int pick = arr[i] + prev2; // Loot current house + max loot till (i-2)th house
            int notPick = prev1;       // Skip current house, keep max loot till (i-1)th house

            int curr = max(pick, notPick);
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};