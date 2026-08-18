class Solution {
  public:
    int kthSmallest(vector<vector<int>> &mat, int k) {

        vector<int> v;
        int n = mat.size();

        // Store all elements
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                v.push_back(mat[i][j]);
            }
        }

        // Sort
        sort(v.begin(), v.end());

        // kth smallest
        return v[k - 1];
    }
};