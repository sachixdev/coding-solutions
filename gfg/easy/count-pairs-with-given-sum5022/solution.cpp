class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        vector<vector<int>> ans;

        sort(arr.begin(), arr.end());

        int left = 0;
        int right = arr.size() - 1;

        while (left < right) {
            int sum = arr[left] + arr[right];

            if (sum == 0) {
                ans.push_back({arr[left], arr[right]});

                int x = arr[left];
                int y = arr[right];

                while (left < right && arr[left] == x) left++;
                while (left < right && arr[right] == y) right--;
            }
            else if (sum < 0) {
                left++;
            }
            else {
                right--;
            }
        }

        return ans;
    }
};