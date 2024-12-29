class Solution {
public:
    std::vector<std::vector<int>> transpose(std::vector<std::vector<int>>& matrix) 
    {
        int row = matrix.size();
        int col = matrix[0].size();

        std::vector<std::vector<int>> result(col, std::vector<int>(row));

        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                result[j][i] = matrix[i][j];
            }
        }
        return result;
    }
};