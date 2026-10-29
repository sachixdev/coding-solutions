class Solution {
  public:
    int minSwaps(vector<int>& arr) {
        int n = arr.size();
        vector<pair<int, int>> vec(n);

        // Store element and its original index
        for (int i = 0; i < n; i++) {
            vec[i] = {arr[i], i};
        }

        // Sort elements by value
        sort(vec.begin(), vec.end());

        vector<bool> visited(n, false);
        int ans = 0;

        for (int i = 0; i < n; i++) {
            // Skip if already visited or already in the correct position
            if (visited[i] || vec[i].second == i) {
                continue;
            }

            // Count the size of the cycle
            int cycle_size = 0;
            int j = i;

            while (!visited[j]) {
                visited[j] = true;
                j = vec[j].second;
                cycle_size++;
            }

            // Add (cycle_size - 1) swaps to answer
            if (cycle_size > 0) {
                ans += (cycle_size - 1);
            }
        }

        return ans;
    }
};