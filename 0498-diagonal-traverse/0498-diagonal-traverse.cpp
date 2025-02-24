class Solution
{
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat)
    {
        int row = mat.size();
        int col = mat[0].size();
        std::vector<std::vector<int>> hold(row + col);

        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if ((i + j) % 2 == 0) {
                    hold[i + j].insert(hold[i + j].begin(), mat[i][j]);
                } else {
                    hold[i + j].push_back(mat[i][j]);
                }
            }
        }

        std::vector<int> res;
        for (int i = 0; i < hold.size(); ++i) {
            for (int j = 0; j < hold[i].size(); ++j) {
                res.push_back(hold[i][j]);
            }
        }

        return res;
    }
};
