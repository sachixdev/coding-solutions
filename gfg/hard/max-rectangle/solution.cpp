class Solution {
  public:

    int largestHistogram(vector<int>& heights) {

        stack<int> st;
        int maxArea = 0;
        int n = heights.size();

        for(int i = 0; i <= n; i++) {

            int currHeight = (i == n) ? 0 : heights[i];

            while(!st.empty() && heights[st.top()] > currHeight) {

                int height = heights[st.top()];
                st.pop();

                int width;

                if(st.empty())
                    width = i;
                else
                    width = i - st.top() - 1;

                maxArea = max(maxArea, height * width);
            }

            st.push(i);
        }

        return maxArea;
    }

    int maxArea(vector<vector<int>> &mat) {

        int n = mat.size();
        int m = mat[0].size();

        vector<int> heights(m, 0);
        int ans = 0;

        for(int i = 0; i < n; i++) {

            for(int j = 0; j < m; j++) {

                if(mat[i][j] == 1)
                    heights[j]++;
                else
                    heights[j] = 0;
            }

            ans = max(ans, largestHistogram(heights));
        }

        return ans;
    }
};