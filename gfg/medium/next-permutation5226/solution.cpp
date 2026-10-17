class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
        int i = n - 2;

        // Step 1: Find the first decreasing element from right
        while (i >= 0 && arr[i] >= arr[i + 1]) {
            i--;
        }

        // Step 2: Find the smallest element greater than arr[i]
        if (i >= 0) {
            int j = n - 1;

            while (arr[j] <= arr[i]) {
                j--;
            }

            swap(arr[i], arr[j]);
        }

        // Step 3: Reverse the suffix
        reverse(arr.begin() + i + 1, arr.end());
    }
};