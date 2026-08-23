class Solution {
  public:
    vector<int> pronicNumbers(int n) {
        vector<int> ans;

        for (long long i = 0; i * (i + 1) <= n; i++) {
            ans.push_back(i * (i + 1));
        }

        return ans;
    }
};