class Solution {
public:
    vector<vector<int>> searchWord(vector<vector<char>> grid,
                                   string word) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> ans;

        int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] != word[0])
                    continue;

                for (int d = 0; d < 8; d++) {
                    int x = i, y = j;
                    int k;

                    for (k = 0; k < word.size(); k++) {
                        if (x < 0 || x >= n ||
                            y < 0 || y >= m ||
                            grid[x][y] != word[k]) {
                            break;
                        }

                        x += dx[d];
                        y += dy[d];
                    }

                    if (k == word.size()) {
                        ans.push_back({i, j});
                        break; // Avoid duplicate starting coordinates
                    }
                }
            }
        }

        return ans;
    }
};