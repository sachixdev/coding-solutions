class Solution {
  public:
    bool subArrayExists(vector<int>& arr) {
        unordered_set<long long> st;

        long long prefixSum = 0;

        for (int num : arr) {
            prefixSum += num;

            // If prefix sum is 0
            if (prefixSum == 0)
                return true;

            // If same prefix sum seen before
            if (st.find(prefixSum) != st.end())
                return true;

            st.insert(prefixSum);
        }

        return false;
    }
};