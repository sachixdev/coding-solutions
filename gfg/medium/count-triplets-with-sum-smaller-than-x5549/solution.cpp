class Solution {
  public:
    int countTriplets(int sum, vector<int>& arr) {
        int n = arr.size();
        int count = 0;

        // Step 1: Sort the array
        sort(arr.begin(), arr.end());

        // Step 2: Fix the first element one by one
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            // Two-pointer approach for the remaining subarray
            while (left < right) {
                int currentSum = arr[i] + arr[left] + arr[right];

                if (currentSum < sum) {
                    // If arr[i] + arr[left] + arr[right] < sum, 
                    // then for all elements between left and right, 
                    // arr[i] + arr[left] + arr[k] will also be < sum.
                    count += (right - left);
                    left++;
                } else {
                    right--;
                }
            }
        }

        return count;
    }
};