class Solution {
  public:
    vector<vector<int>> fourSum(vector<int> &arr, int target) {
        vector<vector<int>> ans;
        int n = arr.size();

        // Step 1: Sort the array
        sort(arr.begin(), arr.end());

        // Step 2: Fix the first element
        for (int i = 0; i < n - 3; i++) {
            // Skip duplicates for the first element
            if (i > 0 && arr[i] == arr[i - 1]) continue;

            // Step 3: Fix the second element
            for (int j = i + 1; j < n - 2; j++) {
                // Skip duplicates for the second element
                if (j > i + 1 && arr[j] == arr[j - 1]) continue;

                int left = j + 1;
                int right = n - 1;

                // Step 4: Two-pointer technique for the remaining two elements
                while (left < right) {
                    long long sum = (long long)arr[i] + arr[j] + arr[left] + arr[right];

                    if (sum == target) {
                        ans.push_back({arr[i], arr[j], arr[left], arr[right]});

                        // Skip duplicates for the third element
                        while (left < right && arr[left] == arr[left + 1]) left++;
                        // Skip duplicates for the fourth element
                        while (left < right && arr[right] == arr[right - 1]) right--;

                        left++;
                        right--;
                    } else if (sum < target) {
                        left++;
                    } else {
                        right--;
                    }
                }
            }
        }

        return ans;
    }
};