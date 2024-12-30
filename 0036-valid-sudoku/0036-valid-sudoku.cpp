class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>>& board)
    {
        std::unordered_set<char> rows[9];
        std::unordered_set<char> cols[9];
        std::unordered_set<char> boxes[9];

        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                char curr = board[i][j];
                
                if (curr == '.') { // skip 
                   continue;
                }

                if (rows[i].count(curr)) {
                    return false;
                }
                rows[i].insert(curr);

                if (cols[j].count(curr)) {
                    return false;
                }
                cols[j].insert(curr);

                int box_id = (i / 3) * 3 + (j / 3);
                if (boxes[box_id].count(curr)) {
                    return false;
                }
                boxes[box_id].insert(curr);
            }
        }
        return true;
    }
};