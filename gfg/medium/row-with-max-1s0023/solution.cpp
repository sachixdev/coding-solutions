class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {

        int n = arr.size();
        int m = arr[0].size();

        int maxOnes = 0;
        int ans = -1;

        for(int i = 0; i < n; i++) {

            auto it = lower_bound(arr[i].begin(), arr[i].end(), 1);

            int ones = m - (it - arr[i].begin());

            if(ones > maxOnes) {
                maxOnes = ones;
                ans = i;
            }
        }

        return ans;
    }
};