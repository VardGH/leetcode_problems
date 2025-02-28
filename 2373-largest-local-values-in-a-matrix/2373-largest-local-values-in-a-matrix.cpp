class Solution
{
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid)
    {
        int n = grid.size();
        std::vector<std::vector<int>> maxLocal(n - 2, std::vector<int>(n - 2));

        for (int i = 0; i < n - 2; ++i) {
            for (int j = 0; j < n - 2; ++j) {
                int max = 0;
                for (int a = i; a < i + 3; ++a) {
                    for (int b = j; b < j + 3; ++b) {
                        max = std::max(max, grid[a][b]);
                    }
                }
                maxLocal[i][j] = max;
            }
        }
        
        return maxLocal;
    }
};
